// https://leetcode.com/problems/sum-of-even-numbers-after-queries/submissions/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
     
            int sum = accumulate(A.begin(), A.end(), 0, [](int x, int y) {
                        return x + (y%2 == 0 ? y: 0);     
            });
            
            vector<int> res;
            
            for(auto& x: queries)
            {
                    if(A[x[1]]%2 == 0)sum -= A[x[1]];
                    
                    A[x[1]] += x[0];
                    
                    if(A[x[1]]%2 == 0)sum += A[x[1]];
                    res.push_back(sum);
            }
            return res;
    }
        
        
        
};
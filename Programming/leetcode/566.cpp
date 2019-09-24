// https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
            int rows = nums.size();
            int cols = nums[0].size();
            
            if(!(rows*cols == r*c))
                    return nums;
            vector<vector<int>>res(r, vector<int>(c));
            int m = 0, n = 0;
            for(int i=0; i<rows; i++)
            {
                    for(int j=0; j<cols; j++)
                    {
                            res[m][n++] = nums[i][j];
                            
                            if(n == c)
                            {
                                    m++;
                                    n = 0;
                            }
                    }
            }
            
            return res;
    }
};
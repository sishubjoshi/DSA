// Problem https://leetcode.com/problems/house-robber/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int rob(vector<int>& nums) {
        
        int size = nums.size();
        
        int ppmax = 0, pmax = 0, curmax = 0;
        for(int i=0; i<size; i++) {
            
            curmax = pmax;
            
            curmax = max(curmax, nums[i] + ppmax);
            
            ppmax = pmax;
            pmax = curmax;
        }
        
        return curmax;
}

int main() {

return 0;
}
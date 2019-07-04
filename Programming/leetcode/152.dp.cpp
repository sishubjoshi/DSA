// Problem https://leetcode.com/problems/maximum-product-subarray/

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        int maxprod = 1, minprod = 1, ans = nums[0];
        for(int i=0; i<n; i++) {
            
            if(nums[i] < 0) swap(maxprod, minprod);
            maxprod = max(maxprod*nums[i],nums[i]);
            minprod = min(minprod*nums[i], nums[i]); 
            
            ans = max(maxprod, ans);
            
            // current = max(current, ;
        }
        return ans;
    }

int main() {

return 0;
}
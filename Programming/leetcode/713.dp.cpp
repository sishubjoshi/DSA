// Problem https://leetcode.com/problems/subarray-product-less-than-k/
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int n = nums.size();
        int count = 0, j=0, prod = 1;
        if(k == 0)return 0;
        for(int i=0; i<n; i++) {
            
            prod *= nums[i];
            
            while(prod >= k) {
                
                prod /= nums[j++];
            }
            
            count += i-j+1;
        }
        
        return count;
    }


int main() {

    vector<int> v{1,1,1};
    int total = 1;

    cout << numSubarrayProductLessThanK(v, total);
return 0;
}
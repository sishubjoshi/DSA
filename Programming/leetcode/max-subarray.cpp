// Problem: https://leetcode.com/problems/maximum-subarray/

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        
        int size = nums.size();
        long long current = 0;
        long long ans = nums[0];
        for(int i=0; i <size; i++) {
            
            current += nums[i];
                
            ans = max(current, ans);
            cout << current << " ";
            current = max(current, 0LL);
            // ans = max(current, ans);
            
            
        }
        
        return ans;
    }

int main() {

}
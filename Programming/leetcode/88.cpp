// https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
            int l = m-1, r = n-1, k = m+n-1;
            
            while(l >= 0 && r >= 0)
                    nums1[l] > nums2[r] ? nums1[k--]=nums1[l--] : nums1[k--]=nums2[r--];
            
            while(r >= 0)
                    nums1[k--] = nums2[r--];
    }
};
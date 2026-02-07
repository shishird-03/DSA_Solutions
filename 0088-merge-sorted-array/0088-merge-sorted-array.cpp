class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
        for(int i=0;i<n;i++){
           nums1[m+i]= nums2[i];
            }
        int total = m+n;
        for(int i=1;i<total;i++){
             int z=i;
               while (z > 0 && nums1[z - 1] > nums1[z]) {
                swap(nums1[z - 1], nums1[z]);
                z--;
            }
            }
    }
};
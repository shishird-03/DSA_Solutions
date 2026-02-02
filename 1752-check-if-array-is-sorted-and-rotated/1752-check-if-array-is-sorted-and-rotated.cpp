class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        int pos =0;
        for(int i=1;i<n;i++){
            if(nums[i]< nums[i-1]){
              pos++;
            }
            
        }
    if (nums[n-1]> nums[0]){
        pos++;
    }
    return pos<=1;
    }
};
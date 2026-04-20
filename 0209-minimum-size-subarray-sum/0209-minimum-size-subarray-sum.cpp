class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, sum=0;
        int n= nums.size();
        int ans= INT_MAX;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(sum>=target){
                ans =min(ans, j-i+1);
                sum -=nums[i];
                i++;
            }
        }
      if(ans == INT_MAX)
    return 0;
else
    return ans;
        
    }
};
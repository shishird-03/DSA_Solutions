class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {
                ele = nums[i];
                count = 1;
            }
            else if(nums[i] == ele) {
                count++;
            }
            else {
                count--;
            }
        }

        int count1 = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == ele)
                count1++;
        }

        if(count1 > nums.size()/2)
            return ele;

        return -1;
    }
};
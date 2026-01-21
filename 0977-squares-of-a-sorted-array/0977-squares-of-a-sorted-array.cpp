class Solution {
public:
    void merge(vector<int>&num, int low, int high){
      if(low<high){
        int pindex= partition(num, low,high);
        merge(num,low,pindex-1);
        merge(num,pindex+1,high);
      }
    }
    int partition(vector<int>& arr, int low, int high){
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }
            while(arr[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        if (nums.size() <= 1) {
            if (nums.size() == 1) nums[0] *= nums[0];
            return nums;
        }
          for(int z=0;z<nums.size();z++){
         nums[z]=nums[z]*nums[z];
        }
        merge(nums,0,nums.size()-1);
      
        return nums;
    }

};
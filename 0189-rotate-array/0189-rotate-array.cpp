class Solution {
public:
    void swaprotation(vector<int>& num, int start, int end){
        while(start<end){
            swap(num[start],num[end]);
            start++;
            end--;
        }

    }

    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
         k = k%n;
        swaprotation(nums,0,n-1);
        swaprotation(nums,0,k-1);
        swaprotation(nums,k,n-1);
    }
    };

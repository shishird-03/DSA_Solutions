class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> n;
        for(int x: nums){
            if (n.count(x)){
                return x;
            }
            n.insert(x);
            }
            return -1;
        }

};

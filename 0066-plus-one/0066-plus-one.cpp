class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int p = digits.size();
        for(int i=p-1;i>=0;i--){
            while(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
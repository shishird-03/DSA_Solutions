class Solution {
public:
    string largestOddNumber(string num) {
        int string =-1;
        int i;
        int n=num.length();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2==1){
            string=i;
            break;
            }
        }
        i=0;
       while (i <= string && num[i] == '0') i++;
        return  num.substr(i, string - i + 1);
    }
};
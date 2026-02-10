class Solution {
public:
    int firstUniqChar(string s) {
      int n= s.length();
      for(int i=0;i<n;i++){
        bool get= 0;
        for(int j=0;j<n;j++){
            if(i!=j && s[i]==s[j]){
                get=1;
                break;
            }
        }
        if(!get){
            return i;
        }
      }

    return -1;
    }
};
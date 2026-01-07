class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";
        int c= strs.size();
        string res= "";
        for(int i=0;i<strs[0].size();i++){
              char ch = strs[0][i];
              for(string s: strs){
                if(i>=s.size() || s[i]!=ch){
                    return res;
                }
              }
            res += ch;
        }
        return res;
    }
};
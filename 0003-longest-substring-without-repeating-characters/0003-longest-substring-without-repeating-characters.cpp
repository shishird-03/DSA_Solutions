class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n= s.size();
        int i=0, temp=0;
        for (int j=0;j<n;j++){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            temp =max(temp, j-i+1);
    }
    return temp;
    }
};
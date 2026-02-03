class Solution {
public:
    int strStr(string haystack, string needle) {
        int c = haystack.size();
        int d= needle.size();
        for(int i=0;i<=c-d;i++){
           if (haystack.substr(i,d)== needle)
           return i;

        }
        return -1;
    }
};
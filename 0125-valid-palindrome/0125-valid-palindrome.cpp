class Solution {
public:
    bool isPalindrome(string s){
        string t = "";
        for (char c : s) {
            if (isalnum(c))
                t += tolower(c);
        }
        return isPalindromes(0,t);
    }
private:
    bool isPalindromes(int i,string& s) {
        if (i>=s.size()/2)
        return true;
        if(s[i] != s[s.size()-i-1])
        return false;
        return isPalindromes(i+1,s);
    }
};
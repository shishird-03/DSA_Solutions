class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        vector<char> c = {'A','E','I','O','U','a','e','i','o','u'};
        int left = 0, right = n - 1;
        while (left < right) {
            bool leftVowel = false;
            for (char ch : c) {
                if (s[left] == ch) {
                    leftVowel = true;
                    break;
                }
            }
            bool rightVowel = false;
            for (char ch : c) {
                if (s[right] == ch) {
                    rightVowel = true;
                    break;
                }
            }

            if (leftVowel && rightVowel) {
                swap(s[left], s[right]);
                left++;
                right--;
            } else if (!leftVowel) {
                left++;
            } else {
                right--;
            }
        }

        return s;
    }
};
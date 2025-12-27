class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) return false;

        int dup = n;
        long long revdigit = 0;

        while (n > 0) {
            int last_digit = n % 10;
            revdigit = revdigit * 10 + last_digit;
            n = n / 10;
        }

        return revdigit == dup;
    }
};

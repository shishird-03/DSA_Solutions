class Solution {
public:
    vector<string> letterCombinations(string digits) {
         if (digits == "") return {};

    vector<string> map = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    vector<string> result = {""};

    for (char digit : digits) {
        vector<string> temp;

        for (string s : result) {
            for (char ch : map[digit - '0']) {
                temp.push_back(s + ch);
            }
        }

        result = temp;
    }

    return result;
}

    
};
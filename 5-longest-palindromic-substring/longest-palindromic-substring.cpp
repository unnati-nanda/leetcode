class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {

            for (int j = i; j < s.length(); j++) {

                bool palindrome = true;

                for (int x = 0; x < (j - i + 1) / 2; x++) {

                    if (s[i + x] != s[j - x]) {
                        palindrome = false;
                        break;
                    }
                }

                if (palindrome && ans.length() < j - i + 1) {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }

        return ans;
    }
};
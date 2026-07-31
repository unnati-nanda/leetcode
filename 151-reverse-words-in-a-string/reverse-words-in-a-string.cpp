class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans;

        int i = n - 1;

        while (i >= 0) {

            // Skip extra spaces
            while (i >= 0 && s[i] == ' ')
                i--;

            // No more words
            if (i < 0)
                break;

            // Last character of the current word
            int end = i;

            // Move to the beginning of the word
            while (i >= 0 && s[i] != ' ')
                i--;

            // Add a space before every word except the first
            if (!ans.empty())
                ans += ' ';

            // Copy the current word
            for (int j = i + 1; j <= end; j++) {
                ans += s[j];
            }
        }

        return ans;
    }
};
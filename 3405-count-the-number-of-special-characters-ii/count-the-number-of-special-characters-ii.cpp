class Solution {
public:
    int numberOfSpecialChars(string word) {

        vector<int> small(26, -1);
        vector<int> capital(26, -1);

        // Store positions
        for(int i = 0; i < word.length(); i++) {

            char ch = word[i];

            if(islower(ch)) {
                small[ch - 'a'] = i; // last lowercase position
            }
            else {

                int idx = ch - 'A';

                // first uppercase position
                if(capital[idx] == -1)
                    capital[idx] = i;
            }
        }

        int count = 0;

        // Check all letters
        for(int i = 0; i < 26; i++) {

            if(small[i] != -1 &&
               capital[i] != -1 &&
               small[i] < capital[i]) {

                count++;
            }
        }

        return count;
    }
};
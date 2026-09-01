class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count = 0;
        int i = 0;
        stack<char> prefix;
         string ans;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                count++;
            }
        }
        if (count == 0)
            return word;

        while (word[i] != ch) {
        
        prefix.push(word[i]);
        i++;
    }
    word[0]=word[i];
   int j = 1;

while (!prefix.empty()) {
    word[j] = prefix.top();
    prefix.pop();
    j++;
}
    return word;

}
}
;
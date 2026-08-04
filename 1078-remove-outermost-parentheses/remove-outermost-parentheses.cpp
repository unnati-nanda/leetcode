class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
int balance = 0;

for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(') {
        balance++;
        if (balance > 1) {
            ans += '(';
        }
    }
 else  { 

        balance--; 

        if (balance >= 1) { 

            ans += ')'; 

        }

    }
}
return ans;
    }
};
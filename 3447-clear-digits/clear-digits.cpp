class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string ans;

        int i = 0;

        while (i < s.length()) {
            if (isdigit(s[i])) {
                st.pop();
            } else {
                st.push(s[i]);
            }
            i++;
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
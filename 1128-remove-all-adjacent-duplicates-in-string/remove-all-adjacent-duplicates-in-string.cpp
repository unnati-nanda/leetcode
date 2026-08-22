class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> p;

        for (int i = 0; i < s.length(); i++) {
            if (!p.empty() && p.top() == s[i]) {
                p.pop();
            }
            else {
                p.push(s[i]);
            }
        }

        string ans = "";

        while (!p.empty()) {
            ans += p.top();
            p.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
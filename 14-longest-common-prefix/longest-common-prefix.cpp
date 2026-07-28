class Solution {
public:
  
    string longestCommonPrefix(vector<string>& strs) {

        string var = strs[0];

        // Find the shortest string
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].length() < var.length()) {
                var = strs[i];
            }
        }

        // Check each character of the shortest string
        for (int i = 0; i < var.length(); i++) {
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != var[i]) {
                    return var.substr(0, i);
                }
            }
        }

        return var;
    }
};
        
   
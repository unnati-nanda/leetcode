/**
 * Definition for a binary tree node.
 * qruct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root)
            return false;
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int depth = q.size();
            vector<int> level;
            for (int i = 0; i < depth; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node) {
                    level.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                } else {
                    level.push_back(INT_MIN); // marker for NULL
                }
            }
            for (int i = 0; i < level.size() / 2; i++) {
                if (level[i] != level[level.size() - i - 1])
                    return false;
            }
        }
        return true;
    }
};
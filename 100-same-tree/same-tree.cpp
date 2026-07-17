/**
 * Definition for a binary tree node.
 * struct TreeNode {
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
            if (p == NULL || q == NULL)
    return false;
        queue<TreeNode*> p1;
        queue<TreeNode*> q1;
        p1.push(p);
        q1.push(q);
        while (!q1.empty() && !p1.empty()) {
            TreeNode* node1 = p1.front();
            p1.pop();
            TreeNode* node2 = q1.front();
            q1.pop();
            if (node1->val != node2->val)
                return false;
            if (node1->left == NULL && node2->left != NULL)
                return false;
            if (node1->left != NULL && node2->left == NULL)
                return false;

            if (node1->left != NULL) {
                p1.push(node1->left);
                q1.push(node2->left);
            }

            // Right child
            if (node1->right == NULL && node2->right != NULL)
                return false;
            if (node1->right != NULL && node2->right == NULL)
                return false;

            if (node1->right != NULL) {
                p1.push(node1->right);
                q1.push(node2->right);
            }
        }
        return true;
    }
};
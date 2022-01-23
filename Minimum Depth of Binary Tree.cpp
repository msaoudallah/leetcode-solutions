/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
const int maxInt = 32767;
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        else if (root->left == NULL) return 1+min(maxInt,minDepth(root->right));
        else if (root->right == NULL) return 1+min(minDepth(root->left),maxInt);
                return 1+min(minDepth(root->left),minDepth(root->right));
            }
};
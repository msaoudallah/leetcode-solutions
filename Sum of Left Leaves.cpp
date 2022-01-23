/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int res = 0;
    bool isleaf(TreeNode* root){
        return !root->left && !root->right;
    }
        int inOrder(TreeNode* root){
        if (root){
            inOrder(root->left);
            if (root->left && isleaf(root->left)&&!root->left->left){
                res+= root->left->val;
            } 
            inOrder(root->right);
                    }
        return res;
    }
    int sumOfLeftLeaves(TreeNode* root) {
         return  inOrder(root);
    }
};
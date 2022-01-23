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
    int sum = 0;
    void inOrder(TreeNode* root){
        if(root){
            inOrder(root->right);
            root->val+=sum;
            sum=root->val;
            inOrder(root->left);
                    }
            }
    TreeNode* convertBST(TreeNode* root) { 
        inOrder(root);
        return root;
    }
};
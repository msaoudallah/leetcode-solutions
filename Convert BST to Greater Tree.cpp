/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> tree;
void inOrder(TreeNode* root){
        if (root){
        inOrder(root->left);
        tree.push_back(root->val);
        inOrder(root->right);   
    }
        }
void create(TreeNode* root){
        if(root){
        int newv = 0;
    for(int i = 0 ; i<tree.size();i++){
        if (tree[i]>root->val)
            newv+= tree[i];
        }
        root->val+=newv;
        create(root->right);
        create(root->left);
            }
        }
class Solution {
public:
        TreeNode* convertBST(TreeNode* root) {  
        tree.clear();
        inOrder(root);
        create(root);
        return root;
    }
};
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
    vector<int> tree;
    void inOrder(TreeNode* root){
        if (root){
            inOrder(root->left);
            tree.push_back(root->val);
            inOrder(root->right);
                    }
    }
    bool isValidBST(TreeNode* root) {
           /* if (root){
        if (root->left&& root->right){
            return  isValidBST(root->left)&&isValidBST(root->right)&&root->left->val < root->val < root->right
                ->val;
        }else if (root->left&& !root->right){
            return  isValidBST(root->left)&&root->left->val < root->val;
        }else if (!root->left&&root->right){
                        return isValidBST(root->right)&&root->right->val > root->val;
        }else{
            return 1;
        }
    }*/
        inOrder(root);
        for(int i = 1 ; i<tree.size();i++){
            if(tree[i] <=tree[i-1])
                return false;
        }
        return true;
            }
};
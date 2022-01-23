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
    int TreeSum(TreeNode* root) {
        if (!root) return 0;
        return root->val+TreeSum(root->left)+TreeSum(root->right);
    }
            int findTilt(TreeNode* root) {
      int sum=0;
      if(!root) return 0;  
      else if (!root->left && !root->right) return 0;
            sum+= abs(TreeSum(root->left) - TreeSum(root->right));
            return sum+=findTilt(root->left)+findTilt(root->right);
                      }
};
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
    vector<int> res;
    void preOrder(TreeNode* root){
        if(!root) return ;
                preOrder(root->left);
        res.push_back(root->val);
        preOrder(root->right);
    }
    void printVec(vector<int>a){
      for(int i = 0 ; i<a.size();i++) cout<<a[i]<<" ";  
    }
    int getMinimumDifference(TreeNode* root) {
                preOrder(root);
        //printVec(res);
        int min = INT_MAX;
        for(int i = 0 ; i<res.size()-1;i++){
            if (abs(res[i+1]- res[i]) < min)
                min= abs(res[i+1]- res[i]);
        }
                         return min;
    }
};
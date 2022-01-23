/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int>> sol;
vector<int> lvl;
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        sol.clear();
        if (root == NULL)  return sol;
            queue<TreeNode *> q;
            q.push(root);
            lvl.push_back(root->val);
            while(q.empty() == false) {
                TreeNode* temp = q.front();
                if (lvl.size()!= 0 && lvl.size() == q.size()){
                sol.push_back(lvl);
                                lvl.clear();
                }
                q.pop();
                                if (temp->left != NULL) {
                    q.push(temp->left);
                    lvl.push_back(temp->left->val);
                }
                if (temp->right != NULL){
                    q.push(temp->right);
                    lvl.push_back(temp->right->val);
                }
                            }
        //reverse(sol.begin(),sol.end());
        return sol;
            }
};
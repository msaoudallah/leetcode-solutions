/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
vector<TreeLinkNode *> lvl;
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (root == NULL)  return;
            queue<TreeLinkNode *> q;
            q.push(root);
            lvl.push_back(root);
            while(q.empty() == false) {
                TreeLinkNode* temp = q.front();
                if (lvl.size()!= 0 && lvl.size() == q.size()){
                    for ( int i = 0 ; i<lvl.size()-1;i++){
                        cout<<lvl[i]->val;
                        lvl[i]->next = lvl[i+1];
                    }
                                        lvl.clear();
                }
                q.pop();
                                if (temp->left != NULL) {
                    q.push(temp->left);
                    lvl.push_back(temp->left);
                }
                if (temp->right != NULL){
                    q.push(temp->right);
                    lvl.push_back(temp->right);
                }
                                            }
            }
};
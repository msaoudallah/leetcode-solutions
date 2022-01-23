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
    string PreOrd(TreeNode* t){
        string s;
        if(!t) return"";
        //s+= to_string(t->val);
        s+="(";
        s+= to_string(t->val);
        if (t->left){
        s+=PreOrd(t->left);
        s+=PreOrd(t->right);
        }else if (!t->left && t->right){
            s+="()";
            s+=PreOrd(t->right);
                    }
        s+=")";
        return s;
            }
        string tree2str(TreeNode* t) {
        if (!t) return"";
        string s = PreOrd(t);
        return s.substr(1,s.length()-2);
    }
};
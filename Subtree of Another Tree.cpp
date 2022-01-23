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
        bool isSubtree(TreeNode* s, TreeNode* t) {
       return isSubtree(s,t,false);
    }  
         bool isSubtree(TreeNode* s, TreeNode* t, bool f) {
        if (!s && !t ) return true;
        else if ((s&&!t) || (t&&!s) ) return false;
        return ((s->val == t->val) && isSubtree(s->left, t->left,true)&&isSubtree(s->right, t->right,true))
                || (!f && (isSubtree(s->left, t,false) || isSubtree(s->right, t,false)) );
    }
};
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        /*TreeNode* r1= t1;;
        TreeNode* r2 = t2;
                        TreeNode* prev1;
        TreeNode* prev2;
                while(t1&&t2){
            cout<<t1->val<<" "<<t2->val<<endl; 
            t1->val+= t2->val;
            prev1 = t1;
            t1 = t1->left;
            prev2 = t2;
            t2 = t2->left;
        }
        if(prev2->left &&!prev1->left){
            cout<<t1->val<<" "<<t2->val<<endl; 
           prev1->left = t2; 
        }else{
                    }
                                t1 = r1->right;
        t2 = r2->right;
                        while(t1&&t2){
            cout<<t1->val<<" "<<t2->val<<endl; 
            t1->val+= t2->val;
            prev1 = t1;
            t1 = t1->right;
            prev2 = t2;
            t2 = t2->right;
        }
        if(prev2->right &&!prev1->right){
                       prev1->right = t2; 
        }
                return r1;
*/
                if (!t1 && !t2) return NULL;
        else if (!t1) return t2;
        else if (!t2) return t1;
        else {  
                //cout<<t1->val<<" "<<t2->val<<endl;   
                t1->val+= t2->val;
                t1->left = mergeTrees(t1->left,t2->left);
                t1->right = mergeTrees(t1->right,t2->right);
        }
               return t1; 
                                                        }
};
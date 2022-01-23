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
    int getSum(std::stack<int> s){
        int sum = 0;
        while(!s.empty()) {
            sum+= s.top();
            s.pop();
        }
        return sum;
    }
    void printStack(std::stack<int> s) {
            while(!s.empty()) {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
    std::stack<int> s1;
    bool hasPathSum(TreeNode* root, int sum) {
        // given a tree priint all posibble paths from root
        if ( !root ) return false;
        s1.push(root->val);
        if (!root->left &&!root->right && getSum(s1)== sum) {
            /*cout<<"stack from true : ";
            printStack(s1);
            cout<<getSum(s1)<<" ";*/
            return true;
        }else if (!root->left &&!root->right&& getSum(s1)!= sum){
            /*cout<<"stack from false : ";
            printStack(s1);
            cout<<getSum(s1)<<" ";*/
            s1.pop();
            return false;
        }
        //cout<<getSum(s1)<<" ";
        if (hasPathSum(root->left,sum) || hasPathSum(root->right,sum)) {
            return true;
        }else{
        s1.pop(); 
        return false;
        }
            }
};
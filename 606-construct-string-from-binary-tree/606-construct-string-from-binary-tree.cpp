/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
string ans;
    void fun(TreeNode * root){
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL){
            cout<<"root "<<root->val<<endl;
            string t = to_string(root->val);
    ans+=t;
            return ;
        }
        if(root->right==NULL){
         string t = to_string(root->val);
    ans+=t;
            ans.push_back('(');
            fun(root->left);
            ans.push_back(')');
            return;
        }
        
        
            string t = to_string(root->val);
    ans+=t;
                    ans.push_back('(');
            fun(root->left);
            ans.push_back(')');
        // ans.push_back(root->val+'0');
                    ans.push_back('(');
            fun(root->right);
            ans.push_back(')');
    }
    string tree2str(TreeNode* root) {
 fun(root);
        return ans;
    }
};
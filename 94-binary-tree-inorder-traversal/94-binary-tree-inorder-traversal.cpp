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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        
      while(root!=NULL){
          if(root->left==NULL){
              ans.push_back(root->val);
              root=root->right;
          }else{
              TreeNode * previous =root->left;
              while(previous->right && previous->right!=root){
                  previous=previous->right;
              }
              
              
              if(previous->right==NULL){
                  previous->right=root;
                  root=root->left;
              }else{
                  previous->right=NULL;
                  ans.push_back(root->val);
                  root=root->right;
              }
          }
      }
        return ans;
        
    }
};
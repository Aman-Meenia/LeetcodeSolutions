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

    TreeNode *fun(TreeNode * root , TreeNode * p ,TreeNode * q){
        if(root==NULL){
            return NULL;
        }
        if(root==p || root==q){
            return root;
        }
    
        
      TreeNode * left= fun(root->left , p , q);
     TreeNode *right=fun(root->right , p , q);
      if(left==NULL) return right;
        if(right==NULL) return left;
      
        return root;
        
        
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
       return fun(root,p,q);
   
    }
};
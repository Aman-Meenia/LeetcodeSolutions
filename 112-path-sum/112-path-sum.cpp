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
    
    bool fun(TreeNode * root , int sum , int targetsum){

           if(root==NULL) return false ;
        if(root->left==NULL && root->right==NULL){
            if(sum+root->val==targetsum) return true;
            return false;
        }

       bool a = fun(root->left,sum+root->val,targetsum);
      bool b = fun(root->right,sum+root->val,targetsum);
     return a|b;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       
        return fun(root,0,targetSum);
        
    }
};
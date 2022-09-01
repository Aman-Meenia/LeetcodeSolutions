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
    int inorder(TreeNode * root , int maximum ){

        if(root==NULL) return 0 ;
        int ans = 0;
        if(root->val>=maximum){     
         ans = 1 + inorder(root->left,root->val) + inorder(root->right,root->val);
        }else{
            ans = inorder(root->left,maximum)+inorder(root->right,maximum);
        }

    return ans;
    }
    
    
    
    
    int goodNodes(TreeNode* root) {
        return inorder(root,INT_MIN);
    }
};
class Solution {
private:
   int dfs(TreeNode* root, int mask){
        if(root == NULL)
            return 0;
    
        mask^=(1<<root->val);
       
         if(root->left == root->right){
            return __builtin_popcount(mask)<=1;
        }
       
        int cntLeft = dfs(root->left, mask);
        int cntRight = dfs(root->right, mask);
        
        return cntLeft + cntRight;
    }
    
public:
    int pseudoPalindromicPaths (TreeNode* root) {
       
        return dfs(root,0);
    }
};
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
    unordered_map<int,int> mp;
    
    TreeNode * fun(vector<int> & inorder , vector<int> & preorder , int instart , int inend , int prestart , int preend){
        if(instart>inend || prestart>preend){
            return NULL;
        }
        TreeNode * n  = new TreeNode();
        n->val= preorder[prestart];
        int index = mp[preorder[prestart]];
        int temp = index-instart;
            n->left=fun(inorder,preorder,instart,index-1,prestart+1,prestart+temp);
        n->right=fun(inorder,preorder,index+1,inend,prestart+temp+1,preend);
        return n;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
for(int i=0; i<n; i++){
mp[inorder[i]]=i;
}
        
        return fun(inorder,preorder,0,n-1,0,n-1);
        
    }
};
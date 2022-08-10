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
    
    
    
    
    
    
    
    TreeNode * fun(vector<int> & v , int low , int high){
        if(low>high) return NULL;
        int mid = low + (high-low)/2;
        TreeNode * ans;
        TreeNode * n = new TreeNode(v[mid]);
        ans=n;
        ans->left= fun(v , low , mid-1);
        ans-> right = fun(v , mid+1 , high);
        return ans;
        
        
    }
    
    
    
    
    
    TreeNode* sortedArrayToBST(vector<int>& v) {
        int n = v.size();
        return fun(v,0,n-1);
    }
};
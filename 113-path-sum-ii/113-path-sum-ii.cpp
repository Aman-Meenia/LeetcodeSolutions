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
        vector<vector<int>> ans;
int sum = 0;
    vector<int> temp;
    void inorder(TreeNode * root , int target ){
      
        // cout<<" sum is "<<sum<<endl;
        if(root==NULL) return;
        sum+=root->val;
        temp.push_back(root->val);
        inorder(root->left, target);
        inorder(root->right,target);
           if(sum==target && root->left==NULL && root->right==NULL){
ans.push_back(temp);
        } sum-=root->val;
        temp.pop_back();
        
        
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
inorder(root,targetSum);
return ans;
        
    }
};
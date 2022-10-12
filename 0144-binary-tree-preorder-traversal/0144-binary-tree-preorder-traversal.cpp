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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
     stack<TreeNode *> st;
      vector<int> ans;
        
        st.push(root);
        while(!st.empty()){
            
            
            TreeNode * n = st.top();
            st.pop();
            ans.push_back(n->val);
            if(n->right) st.push(n->right);
            if(n->left) st.push(n->left);
        }
        
    
        return ans;
        
        
        
        
        
        
        
        
    }
};
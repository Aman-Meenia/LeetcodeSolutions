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
        // left root right 
        stack<TreeNode*> st;
        // st.push(root);
                    TreeNode * n = root;
        while(true){
// cout<<n->val<<endl;
       if(n!=NULL){
           cout<<n->val<<endl;
           st.push(n);
           n=n->left;
       }else{
           // cout<<st.size()<<endl;
           if(st.empty()) return ans;
           else {
TreeNode * t = st.top();
               // cout<<"AMAN "<<endl;
               ans.push_back(st.top()->val);
               st.pop();
               n=t->right;
               
           }
           
       }
           
        }
        

        return ans;
    }
};
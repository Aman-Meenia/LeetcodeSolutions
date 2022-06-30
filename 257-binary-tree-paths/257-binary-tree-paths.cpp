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
    
    vector<vector<int> > ans;
   vector<int> temp;
    void fun(TreeNode * root ){
        
        if(root->left==NULL && root->right==NULL){
      int t=root->val;
            temp.push_back(t);
            // cout<<" temp "<<temp<<endl;
            ans.push_back(temp);
            temp.pop_back();
            return ;
        }
           int t=root->val;

            temp.push_back(t);
            
        if(root->left){
           
            fun(root->left);
      
        }
        if(root->right){
            
            fun(root->right);
              
        }
        
            temp.pop_back();

        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        fun(root);
  vector<string> t;

        
        
        
        
        for(int i=0; i<ans.size(); i++){
            
            string k;
            for(int j=0; j<ans[i].size(); j++){
                string tt=to_string(ans[i][j]);
                k+=tt;
                k.push_back('-');
                 k.push_back('>');
            }
            k.pop_back();
                   k.pop_back();
            t.push_back(k);
        }
        
        
        
        
        
        
        
        return t;
    }
};
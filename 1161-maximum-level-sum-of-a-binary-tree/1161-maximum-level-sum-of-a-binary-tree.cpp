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
    
    int maxLevelSum(TreeNode* root) {
       int maximum=INT_MIN; 
vector<int> ans;
        
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            int temp=0;
            for(int i=0; i<size; i++){

                TreeNode * n=q.front();
           
              temp+=n->val;
                q.pop();
                if(n->left){
                    q.push(n->left);
                }
                if(n->right){
                    q.push(n->right);
                }
                
                
            }
            maximum=max(maximum,temp);
            ans.push_back(temp);

            
            
            
        }
     
    
        for(int i=0; i<ans.size(); i++){
           if(ans[i]==maximum){
               return i+1;
           } 
        }
        return -1;
    }
};
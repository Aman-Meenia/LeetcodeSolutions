/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode *,int> mp;
    unordered_map<TreeNode *,TreeNode *> p;
  void fun(TreeNode * root,TreeNode * parent){
      if(root==NULL){
          return ;
      }

      
       p[root]=parent;
        
      mp[root]=1;
fun(root->left,root);


fun(root->right,root);

      

  }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        // vector<int> ans;
        

        TreeNode * parent=NULL;
        fun(root,parent);
        queue<TreeNode*> q;
        q.push(target);
        int t=0;
        vector<int> ans;
        mp[target]=0;
        while(!q.empty()){
          
            t+=1;
            if(t==k+1){
           
                while(!q.empty()){
                    ans.push_back(q.front()->val);
                    q.pop();
                }
            }
              int size=q.size();
            for(int i=0; i<size; i++){
            TreeNode * n=q.front();
                q.pop();
                
                if(n->left && mp[n->left]==1){
                    mp[n->left]=0;
                    q.push(n->left);
                }
                if(n->right && mp[n->right]==1){
                   mp[n->right]=0;
                    q.push(n->right);  
                }
TreeNode * parentis=p[n];
                if(parentis!=NULL && mp[parentis]==1){
                    mp[parentis]=0;
                    q.push(parentis);
                }
            
                
            }
        }
        
        
        return ans;
    }
};
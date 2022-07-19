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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        int t=1;
        

        
        if(depth==1){
                TreeNode * ans=new TreeNode(val);
            ans->left=root;
                ans->right=NULL;
            return ans;
        }
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            if(t==depth-1){

                
                for(int i=0; i<size; i++){

                    TreeNode * n=q.front();
                    q.pop();
           TreeNode * t1=new TreeNode(INT_MAX);
           TreeNode * t2=new TreeNode(INT_MAX);

                    
                    if(n->left){
                        t1=n->left;
                    }
                    if(n->right){
                        t2=n->right;
                    }
                 TreeNode * p=new TreeNode(val);
                    n->left=p;
                    
                   TreeNode * pp=new TreeNode(val);
                    n->right=pp;
                    // cout<<t1->val<<endl;
    if(t1->val!=INT_MAX){
       n->left->left=t1;
        }

              if(t2->val!=INT_MAX){
             n->right->right=t2;
            }

                    
                    
                }
               return root; 
             }else{
                
                for(int i=0; i<size; i++){
 TreeNode * n=q.front();
                    q.pop();
                    if(n->left){
                        
                        q.push(n->left);
                    }
                    if(n->right){
                 
                        q.push(n->right);
                    }
                }
             
                }
            t++;
            
          
        }
        
        
        
        
        
        return root;
        
        
        
        
        
        
        
        
        
    }
};
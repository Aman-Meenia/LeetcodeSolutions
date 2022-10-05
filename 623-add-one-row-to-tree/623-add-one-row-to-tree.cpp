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
    TreeNode* addOneRow(TreeNode* root, int target, int depth) {
        if(depth==1){
            TreeNode * ans = new TreeNode(target);
            ans->left= root;
            ans->right= NULL;
            return ans;
        }
        
        int temp = 0;
queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            if(temp==depth-2){
                
                for(int i=0; i<size; i++){
                    
                   TreeNode * n = q.front();
                
                    q.pop();
            TreeNode * t = new TreeNode();
                    t->val=target;
                         TreeNode * t2 = new TreeNode();
                    t2->val=target;
                    
t->left=n->left;
                    t2->right=n->right;
                    n->left=t;
                    n->right=t2;
                
                    
}
                return root;
            }else{
                              
                for(int i=0; i<size; i++){
                            TreeNode * n = q.front();
q.pop();
                    if(n->left){
                        q.push(n->left);
                    }
                    if(n->right){
                        q.push(n->right);
                    }
} 
                
                
                
            }
            temp++;
            
            
            
        }
        
        
        
        
        return root;
        
        
    }
};
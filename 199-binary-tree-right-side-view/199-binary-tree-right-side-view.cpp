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
    vector<int> rightSideView(TreeNode* root) {
if(root==NULL)return {};
        vector<int> ans;
        queue<pair<TreeNode *,pair<int,int>> > q;
//          Treenode , row , column 
        q.push(make_pair(root,make_pair(0,0)));
                map<int,int> mp;
        
        while(!q.empty()){
            
          int size=q.size();
            for(int i=0; i<size; i++){
              TreeNode * n=q.front().first;
                int row = q.front().second.first;
                int column = q.front().second.second;

   mp[row]=n->val;
                q.pop();
                if(n->left){
               q.push(make_pair(n->left,make_pair(row+1,column-1)));     
                }
                if(n->right){
                        q.push(make_pair(n->right,make_pair(row+1,column+1))); 
                }
                
                
                
                
            }
            
            
            
        }
        for(auto a:mp){
ans.push_back(a.second);
        }
        
        
        
        
        return ans;
    }
};
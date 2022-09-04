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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int> > ans;
    map<int,vector<vector<int> > > mp;
        
queue<pair<TreeNode*,pair<int,int>> > q;
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
int size = q.size();
            int previousx=-1;
            int previousy=-1;
            for(int i=0; i<size; i++){
                int a = q.front().second.first;
                int b = q.front().second.second;

                TreeNode * n = q.front().first;
 // cout<<"a "<<a<<"b "<<b<<" VAL "<<n->val<<endl;

    if(mp[b].size()>0 && mp[b].back()[1]==a && mp[b].back()[2]==b &&mp[b].back()[0]>n->val){
        vector<int> pp;
      while(mp[b].size()>0 && mp[b].back()[1]==a && mp[b].back()[2]==b &&mp[b].back()[0]>n->val){
          pp.push_back(mp[b].back()[0]);
          mp[b].pop_back();
          
      }
        pp.push_back(n->val);
        sort(pp.begin(),pp.end());
        for(auto it:pp){
            mp[b].push_back({it,a,b});
        }
        
        
        
        // int temp1 = mp[b].back()[0];
        // mp[b].pop_back();
        // mp[b].push_back({n->val,a,b});
        // mp[b].push_back({temp1,a,b});
    }else{
              mp[b].push_back({n->val,a,b});  
    }

                q.pop();
                
                if(n->left){
 q.push(make_pair(n->left,make_pair(a+1,b-1)));  
                }
                if(n->right){
q.push(make_pair(n->right,make_pair(a+1,b+1)));
                }
                
                previousx=a;
                previousy=b;
            }
        }
        
        for(auto a:mp){
vector<int> tt;
            for(auto it:a.second){
                tt.push_back(it[0]);
            }
            ans.push_back(tt);
        }
        
return ans;
        
        
        
        
        
        
        
        
        
    }
};
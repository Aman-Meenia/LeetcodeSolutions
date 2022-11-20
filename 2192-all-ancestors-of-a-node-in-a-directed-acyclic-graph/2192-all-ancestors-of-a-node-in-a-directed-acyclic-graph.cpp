class Solution {
public:
    
    void dfs(vector<int> adj[] , int root , vector<int> & vis){
    for(auto it:adj[root]){
        if(vis[it]==0){
vis[it]=1;
            dfs(adj,it,vis);
        
            }
    }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {

vector<int> adj[n];
for(auto it:edges){
    int a = it[0];
    int b = it[1];
    adj[a].push_back(b);
}
        vector<vector<int> > ans(n);
        for(int i=0; i<n; i++){
vector<int> vis(n,0);
            vis[i]=1;
            dfs(adj,i,vis);
            for(int j=0; j<n; j++){
if(i==j) continue;
                if(vis[j]==1){
                    ans[j].push_back(i);
                }
            }
            
            
            
        }
        return ans;
    }
};
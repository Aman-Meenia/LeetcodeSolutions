//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> ans;
vector<int>  bfs(vector<int> adj[] , int root,vector<int> & vis){

queue<int> q;
q.push(root);
vis[root]=1;

while(!q.empty()){
int n = q.front();
q.pop();
ans.push_back(n);
for(auto it:adj[n]){
    if(vis[it]==0){
        vis[it]=1;
q.push(it);
    }
}
}    
return ans;

}


    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        
        return bfs(adj,0,vis);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
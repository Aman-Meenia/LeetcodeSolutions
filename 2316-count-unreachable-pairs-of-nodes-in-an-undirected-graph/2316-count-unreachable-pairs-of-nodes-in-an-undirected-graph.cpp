#define ll long long 
class Solution {
public:
    
    
    
    void bfs(vector<int> adj[],vector<int> & vis,int node,ll &cnt){
        queue<int> q;
        q.push(node);
        vis[node]=1;
        cnt+=1;
           while(!q.empty()){
    int size = q.size();
               int n = q. front();
               q.pop();
               for(auto it : adj[n]){
               if(vis[it]==-1){
                   vis[it]=1;
                       cnt+=1;
                       q.push(it);
               }
                   
               }
    
              }
    }
    
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(auto it:edges){
             adj[it[1]].push_back(it[0]);
            adj[it[0]].push_back(it[1]);
        }
        vector<int> vis(n,-1);
       
        ll ans = 0;
        ll total = 0;
        for(int i=0; i<n; i++){
            
         if(vis[i]==-1){
              ll cnt = 0;
             bfs(adj,vis,i,cnt);
             cout<<"cnt "<<cnt<<endl;
             total+=cnt;
             ans+=(n-total)*cnt;
         }   
        }
        
        return ans;
    }
};
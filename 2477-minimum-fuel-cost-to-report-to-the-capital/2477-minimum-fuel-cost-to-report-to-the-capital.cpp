#define ll long long

class Solution {
public:
    ll ans =0;
    ll fun(vector<int> adj[] , int root ,vector<int> &vis,int seats){
              ll cnt = 1;
        for(auto it :adj[root]){
            if(vis[it]==0){
                vis[it]=1;
               
               cnt+= fun(adj,it,vis,seats);
            }
        }
        ll total = cnt/seats;
        // cout<<cnt<<endl;
        if(cnt%seats!=0) total++;
        // cout<<root<<" cnt "<<cnt<<endl;
        if(root!=0) ans+=total;
        return cnt;
        
    }
    
    
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int size = roads.size();
        vector<int> adj[size+1];
        for(auto it:roads){
            int a = it[0];
            int b = it[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        vector<int> vis(size+1,0);
        vis[0]=1;
        fun(adj,0,vis,seats);
        return ans;
    }
};
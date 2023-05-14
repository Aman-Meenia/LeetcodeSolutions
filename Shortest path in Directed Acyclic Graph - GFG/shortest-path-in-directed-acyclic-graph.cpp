//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
vector<int> SHORTEST_PATH_BETWEEN_TWO_NODES(vector<pair<int,int>> adj[] , int n  , int root ){

vector<int> ans(n,INT_MAX);

priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int> > > pq;

queue<int> q;
q.push(root);
pq.push({0,0});
vector<int> dp(n,INT_MAX);

// dp[root]=0;
while(!pq.empty()){

int distance = pq.top().first;
int t = pq.top().second;
pq.pop();
if(distance<dp[t]){
    dp[t]=distance;

    for(auto it :adj[t]){
int total = it.second+distance;
// cout<<"total "<<total<<endl;
if(dp[it.first]>total){
    // dp[it.first]=total;
    pq.push({total,it.first});
    }
}
}


}


for(int i=0; i<n; i++) if(dp[i]==INT_MAX) dp[i]=-1;
return dp;

}
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int> > adj[N];
        
        for(auto it:edges){
            int a = it[0];
            int b = it[1];
            int c = it[2];
            adj[a].push_back({b,c});
        }
        
        return SHORTEST_PATH_BETWEEN_TWO_NODES(adj,N,0);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
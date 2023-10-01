//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int n,int k, vector<vector<int>>& times){
        
        
vector<vector<int>> adj[n];
for(auto it :times){
    int source = it[0];
    int target = it[1];
    int time = it[2];

    adj[source].push_back({target,time});
    }


priority_queue<pair<int,int> ,vector<pair<int,int> > ,greater<pair<int,int>> > pq;

vector<int> dp(n,INT_MAX);
pq.push({0,0});
dp[0]=0;
while(!pq.empty()){

int root = pq.top().second;
int time = pq.top().first;

pq.pop();
// cout<<" root "<<root<<endl;
for(auto it :adj[root]){
// cout<<" it. "<<it[0]<<endl;

int totaltime = time + it[1];
if(dp[it[0]]>totaltime){
    dp[it[0]]=totaltime;
    pq.push({totaltime,it[0]});
}

}
}

// int ans=0;

// for(auto it:dp) cout<<it<<" ";cout<<endl;
for(int i=0; i<=n; i++){
    if(dp[i]==INT_MAX) dp[i]=-1;;
    
}


       
return dp;      
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
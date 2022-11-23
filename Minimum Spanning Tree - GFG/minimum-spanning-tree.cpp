//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int n, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int> ,vector<pair<int,int> > ,greater<pair<int,int> > > pq;
        // priority_queue<pair<int,int> ,vector<pair<int,int> > ,greater<pair<int,int>> pq;
        
        vector<int> key(n,INT_MAX);
        vector<int> parent(n,-1);
        vector<bool> mst(n,false);
        pq.push({0,0});
        key[0]=0;
        
        while(!pq.empty()){
            int index = pq.top().second;
            mst[index]=true;
            pq.pop();
            
            for(auto it :adj[index]){
                
                int weight=it[1];
                int t = it[0];
                if(mst[t]==false && weight<key[t]){
                    parent[t]=index;
                    key[t]=weight;
                    pq.push({weight,t});
                }
                
                
            }
            
            
        }
        // for(auto a:key) cout<<a<<" ";
        // cout<<endl;
        int ans=0;
        for(auto a:key){
            ans+=a;
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
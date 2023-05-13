//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	
int parent[100000];
int Rank[100000];
void make_set(int n ){
for(int i=0; i<=n; i++){

parent[i]=i;
Rank[i]=0;

}
}


int parent_find(int node){
    if(parent[node]==node){
        return node;
    }
    return parent[node]=parent_find(parent[node]);
}


void union_find(int u , int v){
    u = parent_find(u);
    v = parent_find(v);

if(Rank[u]>Rank[v]){
    parent[v]=u;
}else if(Rank[v]>Rank[u]){
parent[u]=v;
}else{
    parent[v]=u;
    Rank[u]++;
}

}

    int spanningTree(int n, vector<vector<int>> adj[])
    {
        
        vector<vector<int> > v;
        for(int i=0; i<n; i++){
            for(auto it :adj[i]){
                int a= i;
                int b = it[0];
                int c = it[1];
                v.push_back({c,a,b});
            }
        }
        sort(v.begin(),v.end());
        make_set(n);
        int ans = 0;
        for(int i=0; i<v.size(); i++){
            int wt = v[i][0];
            int a = v[i][1];
            int b = v[i][2];
            
            if(parent_find(a)!=parent_find(b)){
                ans+=wt;
           union_find(a,b);
            }
            
            
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
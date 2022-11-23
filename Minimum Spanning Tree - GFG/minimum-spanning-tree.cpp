//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	
int minimumspanningtree(vector<vector<int> >adj[],int n){

vector<int> parent(n,-1);
vector<bool> mst(n,false);
vector<int> key(n,INT_MAX);

key[0]=0;

for(int i=0; i<n; i++){
    int minimum=INT_MAX;
    int index;
 
    for(int j=0; j<n; j++){
        if(mst[j]==false&&key[j]<minimum){
minimum=key[j];
index=j;
            
        }
    }


    mst[index]=true;

    for(auto it:adj[index]){
        int weight=it[1];
        int t = it[0];
        if(mst[t]==false && weight<key[t]){
            key[t]=weight;
            parent[t]=index;
        }

    }






}
int ans = 0;
for(int i=0; i<n; i++){
    ans+=key[i];
}
return ans;

}

    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        return minimumspanningtree(adj,V);
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
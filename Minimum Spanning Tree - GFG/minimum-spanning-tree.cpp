//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree
	 
int parent[1001];
int Rank[1001];
 void make_set(int n ){
    parent[n]=n;
Rank[n]=0;
 }


int find_parent(int node){
    if(node==parent[node]){
        return node;
    }
    return parent[node]=find_parent(parent[node]);
}

void union_fun(int u  , int v){
    u = find_parent(u);
    v=find_parent(v);
    if(Rank[u]<Rank[v]){
parent[u]=v;
    }else if(Rank[v]<Rank[u]){
parent[v]=u;
    }else{
        parent[v]=u;
        Rank[u]+=1;

    }
}
 

int minimumspanningtree(vector<vector<int> >adj[],int n){
vector<vector<int> > v;
for(int i=0; i<n; i++){

    for(auto it :adj[i]){
        v.push_back({it[1],i,it[0]});
    }
}


sort(v.begin(),v.end());


for(int i=0; i<=n; i++){
make_set(i);
}
// int k = 0;
int ans = 0;
for(int i=0; i<v.size(); i++){
int weight = v[i][0];
int x=v[i][1];
int y=v[i][2];
if(find_parent(x)!=find_parent(y)){
union_fun(x,y);
ans+=weight;
}

}



return ans;



}
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        return minimumspanningtree(adj,V);
        // code here
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
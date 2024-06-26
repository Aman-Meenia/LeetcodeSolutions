//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	vector<int> ans;
	bool topo_sort(vector<int> adj[],int n ){


vector<int> vis(n);
vector<int> indegree(n,0);

for(int i=0; i<n; i++){
for(auto it:adj[i]){
    indegree[it]+=1;
}
}

queue<int> q;

for(int i=0; i<n; i++){
    if(indegree[i]==0){
        // cout<<"' i. "<<i<<endl;
q.push(i);
    }
}

while(!q.empty()){

int node = q.front();
ans.push_back(node);
q.pop();

for(auto it:adj[node]){
    indegree[it]--;
    if(indegree[it]==0){
        q.push(it);
    }
}


}

if(ans.size()==n) return true;




return false;
}

	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    topo_sort(adj,V);
	   // for(auto it:ans)cout<<it<<" ";cout<<endl;
	    // code here
	    return ans;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends
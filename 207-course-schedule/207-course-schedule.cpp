class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {

        vector<int> adj[n];
        for(auto it:pre){
            int a = it[0];
            int b = it[1];
            adj[b].push_back(a);
        }
        vector<int> indegree(n,0);
        for(int i=0; i<n; i++){
        for(auto it : adj[i]){
            indegree[it]++;
        }
        }
        queue<int> q;
            int ans =0;
        for(int i=0; i<n; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
    
while(!q.empty()){
    int size = q.size();
    
    for(int i=0; i<size; i++){
        int a = q.front();
        ans++;
        q.pop();
        for(auto it : adj[a]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    
    
    
}
        cout<<ans<<endl;
        if(ans==n) return true;
        return false;
        
        
        
        
    }
};
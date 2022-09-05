#define ll long long 
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<pair<int,int> > adj[n+1];
        for(auto it: times){
adj[it[0]].push_back({it[1],it[2]});
         }
        // for(int i=1; i<=n; i++){
        //     for(auto it : adj[i]){
        //         cout<<it.first<<" "<<it.second<<endl;
        //     }cout<<endl;
        //     cout<<endl;
        // }
        
        
        
        
        vector<ll> dp(n+1,INT_MAX);
        queue<pair<ll,ll> > q;
        dp[k]=0;
        q.push({k,0});
       
   while(!q.empty()){
       int size = q.size();
       for(int i=0; i<size; i++){
           
           ll startpt = q.front().first;
           ll predis = q.front().second;
           q.pop();
           for(auto it:adj[startpt]){
               ll endpt = it.first;
               ll distance = it.second+predis;
               if(distance<dp[endpt]){
                   dp[endpt]=distance;
                   q.push({endpt,distance});
               }
           }
           
           
       }
   }
        
        
        
        
        
        
    
        ll ans = INT_MIN;
        for(int i=1; i<=n; i++){
            ans = max(ans ,dp[i]);
        }
     
        if(ans==INT_MAX) return -1;
        
        return ans;
    }
};
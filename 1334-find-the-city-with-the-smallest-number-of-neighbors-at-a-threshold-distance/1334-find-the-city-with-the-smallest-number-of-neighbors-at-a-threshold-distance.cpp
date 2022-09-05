class Solution {
public:
    
    int fun(vector<pair<int,int> > adj[], int distanceThreshold , int start , int n){
        vector<int> dp(n,INT_MAX);
        
        queue<pair<int,int> > q;
        q.push({start,0});
        dp[start]=0;
        while(!q.empty()){
            int size = q.size();
            
            for(int i=0; i<size; i++){
                int startpt = q.front().first;
                int distance = q.front().second;
                q.pop();
                
                
                for(auto it : adj[startpt]){
                    int pt  = it.first;
                    int dis = it.second + distance ;
                    if(dp[pt]>dis){
                        dp[pt]=dis;
                        q.push({pt,dis});
                    }
                }
                
                
            }
        }
        // for(auto a:dp){
        //     cout<<a<<" ";
        // }cout<<endl;
        int cnt = 0;
        for(auto a:dp){
            if(a<=distanceThreshold) cnt++;
        }
        
        return cnt-1;
        
        
    }
    
    
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        
         vector<pair<int,int> > adj[n];
        for(auto it: edges){
            adj[it[0]].push_back({it[1],it[2]});
                adj[it[1]].push_back({it[0],it[2]});
        }
        vector<int> dp(n);
        for(int i=0; i<n; i++){
dp[i]=fun(adj,distanceThreshold,i,n);
        }
        int maxans=INT_MAX;
        int maxreach=INT_MAX;
        // for(auto a:dp){
        //     cout<<a<<" ";
        // }cout<<endl;
        for(int i=0; i<n; i++){
         if(dp[i]<=maxreach){
             maxans=i;
             maxreach = dp[i];
         }   
        }
        
        return maxans;
        
    }
};
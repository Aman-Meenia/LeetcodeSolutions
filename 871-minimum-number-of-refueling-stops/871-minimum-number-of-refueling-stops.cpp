#define ll long long 
class Solution {
public:
    int minRefuelStops(int target, int startfuel, vector<vector<int>>& stations) {
int ans = 0 ;
        ll maxrange = startfuel;
        sort(stations.begin(),stations.end());
  int n = stations.size();
        vector<ll> dp(n+1);
        dp[0]=startfuel;
        for(int i=0; i<n; i++){
            
            
            for(int t=i; t>=0; t--){
                if(dp[t]>=stations[i][0]){
         dp[t+1] = max(dp[t + 1], dp[t] + stations[i][1]);
                }else{
                    break;
                }
            }
        }
        
        
        
        
        
        for(int i=0; i<=n; i++){
            if(dp[i]>=target) return i;
        }
        
        
        
        
        
        return -1;
    }
};
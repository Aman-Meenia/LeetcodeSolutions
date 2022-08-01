class Solution {
public:
    int dp[1001][3];
    int  fun(int n , int egg){
    if(egg==1) return n;
        if(n==1) return n;
        if(dp[n][egg]!=-1) return dp[n][egg];
            int ans=INT_MAX;
        for(int i=1; i<n; i++){
            
             ans = min(ans,max(fun(i-1,egg-1),fun(n-i,egg))+1);
        }
        return dp[n][egg]=ans;
    }
    
    
    int twoEggDrop(int n) {
   memset(dp,-1,sizeof dp);
        return fun(n,2);
    }
};
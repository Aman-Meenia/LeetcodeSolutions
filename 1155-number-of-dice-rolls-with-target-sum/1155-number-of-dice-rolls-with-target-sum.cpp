#define ll long long 
#define mod 1000000007
class Solution {
public:
    ll dp[1005][35];
    ll fun(int n , int k , int target , int sum,int cnt ){
        if(target==sum){
if(cnt==n){
return 1;
}
        return 0;
        }
        if(cnt==n){
            return 0;
        }
        if(dp[sum][cnt]!=-1) return dp[sum][cnt];
        ll ans = 0;
        for(int i=1; i<=k; i++){
            if(i+sum<=target){
         ans+= fun(n,k,target,sum+i,cnt+1)%mod;
                }
}
        return dp[sum][cnt]=ans%mod;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof dp);
        return fun(n,k,target,0,0);
    }
};
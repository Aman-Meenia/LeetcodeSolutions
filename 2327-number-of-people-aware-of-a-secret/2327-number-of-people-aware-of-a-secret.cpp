#define ll long long
#define mod 1000000007
class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<ll> dp(n+1,0);
        dp[1]=1;
        int t=forget-delay;
        for(int i=2; i<=n; i++){
            int count=0;
              if(i>forget)
                dp[i-forget]=0;
            for(int k=0; k<=i-delay; k++){
                
                    count=(count%mod+dp[k]%mod)%mod;
                
            }
            dp[i]=count;
        }
        ll ans=0;
        for(auto a:dp){
            ans=(ans%mod+a%mod)%mod;
        }
        return ans;
    }
};
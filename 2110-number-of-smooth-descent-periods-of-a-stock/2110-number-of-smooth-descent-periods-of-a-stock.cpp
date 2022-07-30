
#define ll long long
class Solution {
public:
    long long getDescentPeriods(vector<int>& v) {
        int n = v.size();        
        vector<ll> dp(n,1);
        for(int i=n-2; i>=0; i--){
if(v[i]==v[i+1]+1){
    dp[i]+=dp[i+1];
}
            
        }
        ll ans=0;
        for(auto a:dp){
ans+=a;
        }
        return ans;
    }
};
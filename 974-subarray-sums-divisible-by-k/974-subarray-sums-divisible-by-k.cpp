#define ll long long
class Solution {
public:
    int subarraysDivByK(vector<int>& v, int k) {
        int n = v.size();
        vector<int> dp (n);
        ll sum = 0;

        unordered_map<ll , int> mp;
              mp[0]=1;
        int ans = 0;
        for(int i=0; i<n; i++){
sum+=v[i];
            dp[i]=sum;
            
            ll temp = dp[i]%k;
            if(temp<0) temp+=k;
            
            if(mp.find(temp)!=mp.end()){
             ans+=mp[temp];
         }
            mp[temp]+=1;
        }

        return ans;
    }
};
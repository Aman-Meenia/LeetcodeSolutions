
#define mod 1000000007
#define ll long long
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& v) {
        unordered_map<int,ll> mp;
        sort(v.begin(),v.end());
        ll ans =0;
        int n = v.size();
        for(auto a:v){
         mp[a]+=1;
        }

        for(int i=0; i<n; i++){
for(int j=0; j<i; j++){
    if(v[i]%v[j]==0){
        int t = v[i]/v[j];
        if(mp.find(t)!=mp.end()){
          mp[v[i]]+=mp[v[j]] * mp[t];  
        }
    }
    
}
    
        }
        for(auto it:mp){
            ans=(ans %mod + (it.second)%mod )%mod;
        }
        return ans;
    }
};
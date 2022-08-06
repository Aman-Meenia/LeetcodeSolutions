#define ll long long
class Solution {
public:
    long long countBadPairs(vector<int>& v) {
      ll ans =0;
        unordered_map<int,int> mp;
        int n  =v.size();
  for(int i=0; i<n; i++){
      int t = i-v[i];
         if(mp.find(t)!=mp.end()){
             ans+=mp[t];
         }
      mp[t]+=1;
  }
cout<<ans<<endl;
        n-=1;
return (ll)n*((ll)n+1)/2 -ans;
    }
};
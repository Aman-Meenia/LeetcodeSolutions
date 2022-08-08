#define ll long long
class Solution {
public:
    long long taskSchedulerII(vector<int>& v, int k) {
        unordered_map<ll,ll> mp ;
        ll ans = 0;
        int n = v.size();
        for(int i=0; i<n; i++){
          
            if(mp.find(v[i])==mp.end()){
                
                mp[v[i]]=1+k+ans;
                ans+=1;
            }else{
                if(mp[v[i]]>ans){
                    ans=mp[v[i]];
                     mp[v[i]]=1+k+ans;
                ans+=1;
                }else{
                  mp[v[i]]=1+k+ans;
                    ans+=1;
                }
                
                
                
                
            }
            
            
            
            
            
            
        }
        return ans;
    }
};
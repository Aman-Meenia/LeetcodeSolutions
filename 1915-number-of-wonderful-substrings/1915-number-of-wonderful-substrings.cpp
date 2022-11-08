#define ll long long 
class Solution {
public:
    long long wonderfulSubstrings(string s) {
        unordered_map<ll,ll> mp;
        ll ans = 0;
        mp[0]=1;
        ll mask = 0;
        for(int i=0; i<s.size(); i++){
            mask=mask^(1<<(s[i]-'a'));
            
            if(mp.find(mask)!=mp.end()){
                ans+=mp[mask];
            }
            
                mp[mask]+=1;
        
            for(int k=0; k<=11; k++){
                int newmask=mask^(1<<k);
                ans+=mp[newmask];
                
            }

            
        }
        return ans;
    }
};
class Solution {
public:
    int longestAwesome(string s) {
        int ans = 0;
        int mask=0;
        map<int,int> mp;
        mp[0]=-1;
        int n = s.size();
        for(int i=0; i<n; i++){
mask = mask ^ (1<<(s[i]-'0'));
            
            if(mp.find(mask)!=mp.end()){
                ans = max(ans,i-mp[mask]);
            }
            for(int k=0; k<=9; k++){
                int newmask= mask^(1<<k);
                
                if(mp.find(newmask)!=mp.end()){
                    ans = max(ans,i-mp[newmask]);
                }
            }
            if(mp.find(mask)==mp.end()){
                mp[mask]=i;
            }
        }
        return ans;
    }
};
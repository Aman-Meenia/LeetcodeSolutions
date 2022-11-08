#define ll long long
class Solution {
public:
    int findTheLongestSubstring(string s) {
        // unordered_map<char,int> mp;
        // mp['a']=1;
        // mp['e']=2;
        // mp['i']=3;
        // mp['o']=4;  
        // mp['u']=5;
        char mp[26]={1,0,0,0,2,0,0,0,4,0,0,0,0,0,8,0,0,0,0,0,16,0,0,0,0,0};
        ll mask = 0;
        ll maxans=0;
        vector<ll> dp(32,-1);
        int n = s.size();
        for(int i=0; i<n; i++){
                mask=mask^mp[s[i]-'a'];
             if (mask != 0 && dp[mask] == -1){
            dp[mask] = i;
             }
        maxans= max(maxans, i - dp[mask]);
            
        }
        int ans = 13;
        return maxans;
    }
};
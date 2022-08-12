#define ll long long
class Solution {
public:
    int minSubarray(vector<int>& v, int p) {
        ll sum = 0;
       for(auto a: v){
           sum+=a;
       } 
        int ans = INT_MAX;
        sum%=p;
        unordered_map<ll,int> mp;
        mp[0]=-1;
        ll temp = 0;
        int n = v.size();
        for(int i=0; i<n; i++){
            temp += v[i];
            temp%=p;
                mp[temp]=i;
            int left = (temp-sum + p)%p;
                if(mp.find(left)!=mp.end()){
                    int tempans = i-mp[left];
                    ans = min(ans , tempans);
                }
        
        }
        if(ans>=n) return -1; 
        return ans;
    }
};
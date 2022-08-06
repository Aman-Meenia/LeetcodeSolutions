class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        unordered_map<int,int> mp;
        int ans=0;
        int n = v.size();
        for(int i=0; i<n; i++){
int t = v[i];
            if(mp.find(t)!=mp.end()){
                ans+=mp[t];
            }
            mp[t]+=1;
        }
        return ans;
    }
};
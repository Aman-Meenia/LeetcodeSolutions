class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int goal) {
        int n = v.size();
         int ans = 0;
        int sum = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0; i<n; i++){
            sum+=v[i];
            int t = sum - goal;
            if(mp.find(t)!=mp.end()){
                ans+=mp[t];
            }
            mp[sum]+=1;
        }
        return ans;
    }
};
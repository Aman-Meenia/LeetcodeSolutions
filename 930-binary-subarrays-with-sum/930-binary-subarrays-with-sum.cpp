class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int target) {
        int n = v.size();
        unordered_map<int,int>mp;
        int sum = 0;
        mp[0]=1;
       int ans = 0;
        for(int i=0; i<n; i++){
            sum+=v[i];
            int k = sum-target;
            if(mp.find(k)!=mp.end()){
                ans+=mp[k];
            }
            mp[sum]+=1;
        }
        return ans;
    
        
    }
};
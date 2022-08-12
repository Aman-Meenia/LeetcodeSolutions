class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
     unordered_map<int,int> mp;
        int n = v.size();
       mp[0]=1;
        int ans = 0;
        int sum =0 ;
        for(int i=0; i<n; i++){
            sum+=v[i];
int temp = sum-k;
            if(mp.find(temp)!=mp.end()){
ans+=mp[temp];
            }
            mp[sum]+=1;
        
        }
        
        return ans;
        
        
    }
};
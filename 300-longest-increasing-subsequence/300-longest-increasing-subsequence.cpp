class Solution {
public:
    int fun(vector<int> & v){
        int n = v.size();
vector<int> dp(n+1,1);
        int ans=0;
        for(int i=0; i<n; i++){
            // cout<<" v[i] "<<v[i]<<endl;
            for(int j=0; j<i; j++){
                // cout<<v[j]<<" ";
                if(v[i]>v[j]){
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }

        }
        for(auto a:dp){
            // cout<<a<<" "<<endl;
        ans=max(ans,a);
            }
        return ans;
        
    }
    int lengthOfLIS(vector<int>& nums) {
        
        return fun(nums);
    }
};
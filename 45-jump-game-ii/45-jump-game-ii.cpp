class Solution {
public:
    int jump(vector<int>& v) {
      int n = v.size();  
        vector<int> dp(n,INT_MAX);
        dp[0]=0;
        
        for(int i=0; i<n; i++){

            for(int j=i+1; j<=min(i+v[i],n-1); j++){

                dp[j]=min(dp[j],dp[i]+1);
            }
        }
        return dp[n-1];
    }
};

#define ll long long 
class Solution {
public:
    int minPathSum(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
    vector<vector<ll>> dp(n+1,vector<ll>(m+1,INT_MAX));

        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
               if(i==n-1 && j==m-1){
                   dp[n-1][m-1]=v[n-1][m-1];
               }else{
                   ll sum1;
                   ll sum2;
                   
                     sum1= v[i][j]+dp[i+1][j];  
                   
                       sum2 =v[i][j]+dp[i][j+1];
                   

       dp[i][j]=min(sum1,sum2);
               }
                
            }  
        }
        return dp[0][0];
    }
};
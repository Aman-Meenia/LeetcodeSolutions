class Solution {
public:
    int dp[1001][1001];
    int fun(string & s1, int n , string & s2 , int m ){
        if(n==s1.size() || m==s2.size()) return 0;
        int ans=0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s1[n]==s2[m]){
            ans =1+fun(s1,n+1,s2,m+1);
        }else{
         ans=max(fun(s1,n+1,s2,m),fun(s1,n,s2,m+1));
            
        }
        return dp[n][m]=ans;
    }
    int longestCommonSubsequence(string s1, string s2) {
        memset(dp,-1,sizeof dp);
       return  fun(s1,0,s2,0); 
    }
};
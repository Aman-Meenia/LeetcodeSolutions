class Solution {
public:
//     int dp[1001][1001];
//     int fun(string & s1, int n , string & s2 , int m ){
//         if(n==s1.size() || m==s2.size()) return 0;
//         int ans=0;
//         if(dp[n][m]!=-1) return dp[n][m];
//         if(s1[n]==s2[m]){
//             ans =1+fun(s1,n+1,s2,m+1);
//         }else{
//          ans=max(fun(s1,n+1,s2,m),fun(s1,n,s2,m+1));
            
//         }
//         return dp[n][m]=ans;
//     }
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int dp[n+2][m+2];
// BASE CASE 
         for(int i=0; i<n ;i++){
             dp[i][m]=0;
         }
        for(int i=0; i<m; i++){
            dp[n][i]=0;
        }
 int ans=0;
        memset(dp,0,sizeof dp);
        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
             int ans=0;
        if(s1[i]==s2[j]){
            ans =1+dp[i+1][j+1];
        }else{
         ans=max(dp[i+1][j],dp[i][j+1]);
            
        }
                   dp[i][j]=ans;
        }
    
            
        }
        
        
       return dp[0][0]; 
    }
};
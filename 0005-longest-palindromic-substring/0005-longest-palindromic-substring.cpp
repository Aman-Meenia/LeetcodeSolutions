class Solution {
public:
    
    
    
    string longestPalindrome(string s) {
        
        int n = s.size();
int dp[n][n];
        memset(dp,-1,sizeof dp);
        
                int low = 0;
        int high = 1;
        for(int i=0; i<n; i++){
            dp[i][i]=1;
        }
        
        for(int i=1; i<n; i++){
            if(s[i-1]==s[i]){
                low=i-1;
                high=2;
            dp[i-1][i]=1;
            }else{
                dp[i-1][i]=0;
            }
        }
        
        for(int j=2; j<n; j++){
            int k = j;
            for(int i=0; i<n-j; i++){
                if(s[i]==s[k]&&dp[i+1][k-1]==1){
                    dp[i][k]=1;
                    if(k-i+1>high){
                        low=i;
                    high=k-i+1;
                    }
                }
                k++;
            }
        }

        
        
        return s.substr(low,high);
        
    }
};
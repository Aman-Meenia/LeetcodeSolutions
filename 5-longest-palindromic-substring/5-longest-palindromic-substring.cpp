class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        int dp[n+1][n+1];
        memset(dp,-1,sizeof dp);
                string ans;
//           if string is of length 1 it is always palindrome 
        // string ans;
        ans.push_back(s[0]);
        for(int i=0; i<n; i++) dp[i][i]=1;
        //           if string is of length 2 if it both character are. same then it is  palindrome 
        
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                if(ans.size()==1){
                    ans.clear();
                     ans.push_back(s[i-1]);
                     ans.push_back(s[i]);
                }
                // ans=s[i-1]+s[i];
                dp[i-1][i]=1;
            }
        }

        
        for(int j=2; j<n; j++){
            int k =j;
            for(int i=0; i<n-j; i++){
                if(s[i]==s[k] && dp[i+1][k-1]==1){
                    dp[i][k]=1;
if(k-i+1>ans.size()){
    ans=s.substr(i,k-i+1);
}
                }
                
                k++;
            }
        }
        
        
        return ans;
        
    }
};
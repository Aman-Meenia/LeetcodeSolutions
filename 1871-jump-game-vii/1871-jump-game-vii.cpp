class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
   
      int n = s.size();  
        vector<int> dp(n,INT_MAX);
        dp[0]=0;
        int tt=0;
//           we use tt to store the maximum index upto which we are already visited so next time we start from maximum element
 for(int i=0; i<n; i++){
if(dp[i]==INT_MAX) continue;
for(int j=max(i+minJump,tt); j<=min(i+maxJump,n-1); j++){
             if(s[j]=='1') continue;
                dp[j]=1;
    
                if(j==n-1){
               return dp[j];
                }
    
            }
            tt=i+maxJump;
        }
        return dp[n-1]!=INT_MAX;
 
    }
};
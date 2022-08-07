#define ll long long 
#define mod 1000000007
class Solution {
public:
 
    
    int countVowelPermutation(int n) {
ll ans =0;
        ll dp[n+1][6];
             memset(dp,0,sizeof dp);
        for(int i=0; i<5; i++){
            dp[n-1][i]=1;
        }


            for(int i=n-2; i>=0; i--){
                // a => e
                 dp[i][0] =  dp[i+1][1];
                // e => a , i 
            dp[i][1] = (dp[i+1][0] + dp[i+1][2]) % mod;
                // i => a , e , o , u
            dp[i][2] = (dp[i+1][0] + dp[i+1][1] + dp[i+1][3] + dp[i+1][4]) % mod;
                // o => i , u 
            dp[i][3] = (dp[i+1][2] + dp[i+1][4]) % mod;
                // u => a
            dp[i][4] =  dp[i+1][0];

        }
        
        
        
        for(int i=0; i<5; i++){
            ans=(ans%mod +dp[0][i]%mod) %mod;
        }
        return ans;
        
        
        
        
        
        
        
        

    }
};
//  a e i o u 
// a => e
// e => a , i 
// i => a , e , o , u
// o => i , u 
// u => a
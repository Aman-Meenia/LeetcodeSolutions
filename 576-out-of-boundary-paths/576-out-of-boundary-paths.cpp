#define mod 1000000007
#define ll long long 
class Solution {
public:
    
    
    ll dp[51][51][51];
    long long  fun(int n , int m , int i, int j , int maxmove){
        
     if(i<0 || j<0  || i>=n || j>=m)  return 1;
        if(maxmove<=0) return 0;
        if(dp[i][j][maxmove]!=-1) return dp[i][j][maxmove];
        ll up   =fun(n,m,i-1,j,maxmove-1);
        ll right=fun(n,m,i,j+1,maxmove-1);
        ll left =fun(n,m,i,j-1,maxmove-1);
        ll down =fun(n,m,i+1,j,maxmove-1);
        
        return dp[i][j][maxmove]=(up%mod + right%mod  + left%mod  + down%mod)%mod;
        
    }
  
    
    
    
    
    
    int findPaths(int m, int n, int maxmove, int startrow, int startcolumn) {
        
        memset(dp,-1,sizeof dp);
      return fun(m,n,startrow,startcolumn,maxmove);
        
        
        
    }
};
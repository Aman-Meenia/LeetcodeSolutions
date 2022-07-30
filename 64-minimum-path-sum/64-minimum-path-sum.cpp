#define ll long long 
class Solution {
public:
    int dp[201][201];
    ll fun(vector<vector<int> > & v, int i , int j){
        int n = v.size();
        int m = v[0].size();
        if(i==n-1 && j==m-1){
            return v[i][j];
        }
        
        
        if(i>=n || j>=m || i<0 || j<0){
            return INT_MAX;
        }
  if(dp[i][j]!=-1) return dp[i][j];
        ll sum1= v[i][j]+fun(v,i+1,j);
        ll sum2 =v[i][j]+fun(v,i,j+1);

        return dp[i][j]=min(sum1,sum2);
        
        
    }
    
    
    
    
    
    
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof dp);
        return fun(grid,0,0);
    }
};
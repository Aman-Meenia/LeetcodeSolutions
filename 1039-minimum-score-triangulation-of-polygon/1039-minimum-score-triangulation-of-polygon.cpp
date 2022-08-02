class Solution {
public:
//     int dp[51][51];
//     int fun(vector<int> & v , int i , int j ){
//         if(i+1==j) return 0;
//         int ans = INT_MAX;
//         if(dp[i][j]!=-1) return dp[i][j];
//         for(int k=i+1; k<j; k++){
//          ans = min(ans,v[i]*v[j]*v[k] + fun(v,i,k)+fun(v,k,j));
//         }
//         return dp[i][j] = ans;
//     }
    
    
    
    int minScoreTriangulation(vector<int>& v) {

        int n = v.size();
        int dp[n+1][n+1];
         memset(dp,0,sizeof dp);
        
        for(int i=n-1; i>=0; i--)
        {
            for(int j=i+2; j<n; j++){
                  int ans = INT_MAX;
                 for(int k=i+1; k<j; k++){
    // cout<<"ans "<<v[i]*v[j]*v[k] +dp[i][k]+dp[k][j]<<endl;
ans = min(ans,v[i]*v[j]*v[k] +dp[i][k]+dp[k][j]);
        }
       if(ans!=INT_MAX)
                dp[i][j]=ans;
            }

        }        
        return dp[0][n-1];
    }
};
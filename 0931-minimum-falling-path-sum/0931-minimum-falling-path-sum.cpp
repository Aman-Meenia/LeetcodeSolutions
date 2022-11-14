class Solution {
public:
    int dp[101][101];
    int fun(vector<vector<int>>& v ,int i,int j){
        int n = v.size();
        int m = v[0].size();
        if(i>=n){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
int ans1=INT_MAX,ans2=INT_MAX,ans3=INT_MAX;
        if(j>=1){
        ans1=v[i][j-1]+fun(v,i+1,j-1);
        }
        ans2=v[i][j]+fun(v,i+1,j);
        if(j<n-1){
        ans3=v[i][j+1]+fun(v,i+1,j+1);
        }
        
        return 
            dp[i][j]= min(ans1,min(ans2,ans3));
    }
    
    int minFallingPathSum(vector<vector<int>>& v) {
      int ans = INT_MAX;
        for(int j=0; j<v[0].size(); j++){
            memset(dp,-1,sizeof dp);
  int temp = v[0][j]+fun(v,1,j);
            
                      ans=min(ans,temp);
        }
        return ans;
    }
};
class Solution {
public:
    int dp[51][51];
    int fun(vector<int> & v , int i , int j ){
        if(i+1==j) return 0;
        int ans = INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=i+1; k<j; k++){
         ans = min(ans,v[i]*v[j]*v[k] + fun(v,i,k)+fun(v,k,j));
        }
        return dp[i][j] = ans;
    }
    
    
    
    int minScoreTriangulation(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return fun(v,0,v.size()-1);
    }
};
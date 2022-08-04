class Solution {
public:
    int dp[101];
    int fun(vector<int> & v ,int index,int n ){
        if(index>=n) return 0;
        if(dp[index]!=-1) return dp[index];
        return dp[index] =max(v[index]+fun(v,index+2,n),fun(v,index+1,n));
    }
    int rob(vector<int>& v) {
        if(v.size()==1) return v[0];
        int n = v.size();
        memset(dp,-1,sizeof dp);
        int a = fun(v,0,n-1);
        memset(dp,-1,sizeof dp);
        int b = fun(v,1,n);
        return max(a,b); 
    }
};
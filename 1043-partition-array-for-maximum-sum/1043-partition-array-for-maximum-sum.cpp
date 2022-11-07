class Solution {
public:
    int dp[502];
    int fun(vector<int> & v , int k ,int n){
        if(v.size()==n) return 0;
        int maximum = INT_MIN;
        int size =v.size();
        int ans=0;
        int t = 0;
        if(dp[n]!=-1) return dp[n];
        for(int i=n; i<min(size,n+k); i++){
            int temp = i-n+1;
            
        maximum=max(maximum,v[i]);
           t=(maximum*temp)+fun(v,k,i+1); 
            ans=max(ans,t);
        }
        return dp[n]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& v, int k) {
        memset(dp,-1,sizeof dp);
       return fun(v,k,0); 
    }
};
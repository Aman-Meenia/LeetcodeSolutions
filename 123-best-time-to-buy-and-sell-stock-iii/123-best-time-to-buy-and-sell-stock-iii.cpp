class Solution {
public:
    
    int dp[100001][3][2];
    int fun(vector<int> & v , int index, int k , bool buy){
        if(k==0){
            return 0;
        }
        if(index==v.size()) return 0;
        if(dp[index][k][buy]!=-1) return dp[index][k][buy];
        // if we choose that 
        if(buy){
          return dp[index][k][buy]=max(-v[index] + fun(v,index+1,k,!buy),fun(v,index+1,k,buy));
        }else{
            
            return dp[index][k][buy]= max(v[index]+fun(v,index+1,k-1,!buy),fun(v,index+1,k,buy));
        }
    }
    
    
    int maxProfit(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return fun(v,0,2,true);
    }
};
class Solution {
public:
    int dp[2500][2501];
    int lis(vector<int>&v, int index, int previous){
        if(index>=v.size()) return 0;
        if(dp[index][previous+1]!=-1) return dp[index][previous+1];
        int t=lis(v,index+1,previous);

        if(previous==-1 || v[index]>v[previous]){
           t=max(t,1+lis(v,index+1,index));
        }
        return dp[index][previous+1]=t;
    }
    
    int lengthOfLIS(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return lis(v,0,-1);
    }
};
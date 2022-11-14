class Solution {
public:
    
    
    int dp[2502][2502];
int recursion(vector<int> & v , int index, int previous){
    
    if(index==v.size()) return 0;
    if(dp[index][previous+1]!=-1) return dp[index][previous+1];
    int ans1=0;
    int ans2=0;
    if(previous==-1||v[index]>v[previous]){
       ans1=1+recursion(v,index+1,index);
    }
    ans2=recursion(v,index+1,previous);
    return dp[index][previous+1]=max(ans1,ans2);
}
    
    
    
    int lengthOfLIS(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return recursion(v,0,-1);
    }
};
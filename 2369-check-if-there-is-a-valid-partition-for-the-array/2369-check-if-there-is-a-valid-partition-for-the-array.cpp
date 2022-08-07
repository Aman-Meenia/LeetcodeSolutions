class Solution {
public:
    
    
int dp[100000];
    bool fun(vector<int> & v ,int i){
        int size = v.size();
        if(i>=size){
            return true;
        }
        if(dp[i]!=-1) return dp[i];
        int ans = false;
        if(i+1<size && v[i]==v[i+1]){
           ans = ans | fun(v,i+2);
        }
        if(i+2<size && v[i]==v[i+1] && v[i+1]==v[i+2]){
            ans=ans|fun(v,i+3);
        }
        if(i+2<size && v[i]+1==v[i+1] && v[i+1]+1==v[i+2]){
            ans=ans|fun(v,i+3);
        }
        return dp[i]=ans;
        
    }
    
    
    
    bool validPartition(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return fun(v,0);
    }
};
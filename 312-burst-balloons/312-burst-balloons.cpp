class Solution {
public:
    
    int dp[301][301];
    int maxcost(vector<int> & v, int i , int j){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=INT_MIN;
        for(int k=i; k<=j; k++){
            int cost=maxcost(v,i,k-1) + maxcost(v,k+1,j) + v[k] * v[i-1] * v[j+1];
            ans=max(ans,cost);
        }
        return dp[i][j]=ans;
    }
    
    
    
    int maxCoins(vector<int>& v) {
        v.push_back(1);
        v.insert(v.begin(),1);
        memset(dp,-1,sizeof dp);
        return maxcost(v,1,v.size()-2);
    }
};
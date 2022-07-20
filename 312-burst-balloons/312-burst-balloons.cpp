class Solution {
public:
    
    int maxCoins(vector<int>& v) {
        int size=v.size();
        v.push_back(1);
        v.insert(v.begin(),1);
        int dp[v.size()][v.size()];
        memset(dp,0,sizeof dp);
        
        for(int i=size; i>=1; i--){
            
            for(int j=1; j<=size; j++){
                if(i>j) continue;
                 int ans=INT_MIN;
        for(int k=i; k<=j; k++){
            int cost=dp[i][k-1] + dp[k+1][j] + v[k] * v[i-1] * v[j+1];
            ans=max(ans,cost);
        }
    dp[i][j]=ans;
            }
            
        }
        
        
        
        
        return dp[1][size];
    }
};
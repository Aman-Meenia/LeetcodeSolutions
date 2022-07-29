class Solution {
public:

    int maxSumAfterPartitioning(vector<int>& v, int k) {
        int n = v.size();
int dp[n+1];
        memset(dp,0,sizeof dp);
        for(int index=n-1; index>=0; index--){
            int ans =INT_MIN;
            int maximum =INT_MIN;
            for(int i=index; i<v.size(); i++){
            maximum=max(maximum,v[i]);
            if(i<(index+k)){
 int temp=maximum*((i-index)+1) +dp[i+1];

                ans=max(ans,temp);
            }
       
        }
        
        
                      dp[index]=ans;
        }
        
        
        
        
        
        
        
        
        
        
        
        return dp[0];
    }
};
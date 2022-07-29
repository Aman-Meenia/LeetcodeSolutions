class Solution {
public:

    bool canPartition(vector<int>& v) {
      
int sum=0;
for(auto a:v){
    sum+=a;
}
        if(sum%2){
            return false;
        }
        int target = sum/2;
        
        int n =v.size();
       vector<vector<bool> > dp(n+1,vector<bool>(target+1,false));
        for(int i=0; i<=n; i++){
            dp[i][0]=true;
        }
        for(int i=n-1; i>=0; i--){
            for(int j=1; j<=target; j++){
             if(v[i]<=j){
           dp[i][j]= dp[i+1][j-v[i]] || dp[i+1][j];
        }else{
dp[i][j]=dp[i+1][j];
        }    
            }
        }
        
        
        
        
        
        return dp[0][target];
        
        
    }
};
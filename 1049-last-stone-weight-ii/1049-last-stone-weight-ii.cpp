class Solution {
public:
    
    

    
    int lastStoneWeightII(vector<int>& v) {
        int sum = 0;
        for(auto a:v) sum+=a;
        int n = v.size();
        int dp[n+1][sum+1];
     
memset(dp,0,sizeof dp);
            for(int i=0; i<n; i++){
                dp[i][0]=1;
            }
        int k = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=sum/2; j++){
                bool a =false , b=false;
                if(v[i-1]<=j){
                   a=dp[i-1][j-v[i-1]];
                }
                   b=dp[i-1][j];
                dp[i][j]=a||b;
                if(dp[i][j]){
                    k=max(k,j);
                }
            }
            
            
            
        }
        
        
        
        
        
        
            if(dp[n][k]==1) {
                int a = sum-k;
                int b = k;
                return abs(a-b);
            }
        
    
        
        
        
        
        
        
        return sum;
    }
};
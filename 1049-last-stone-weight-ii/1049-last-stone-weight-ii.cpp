class Solution {
public:
    
    
// int dp[31][3001];
//     bool fun(vector<int> & v , int index ,int target){
//         if(target==0) return true;
//         if(index>=v.size()) return false;
//    if(dp[index][target]!=-1) return dp[index][target];
//         int a = false , b = false;
        
//         if(v[index]<=target){
//        a = fun(v,index+1,target-v[index]);
//         }
//        b = fun(v,index+1,target);
//         return  dp[index][target]=a||b;
//     }
    
    
    
    int lastStoneWeightII(vector<int>& v) {
        int sum = 0;
        for(auto a:v) sum+=a;
        int n = v.size();
        int dp[n+1][sum+1];
        for(int k=sum/2; k>=0; k--){
memset(dp,0,sizeof dp);
            for(int i=0; i<n; i++){
                dp[i][0]=1;
            }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=sum; j++){
                bool a =false , b=false;
                if(v[i-1]<=j){
                   a=dp[i-1][j-v[i-1]];
                }
                   b=dp[i-1][j];
                dp[i][j]=a||b;
            }
            
            
            
        }
            if(dp[n][k]==1) {
                int a = sum-k;
                int b = k;
                return abs(a-b);
            }
        
        }
        
        
        
        
        
        
        return sum;
    }
};
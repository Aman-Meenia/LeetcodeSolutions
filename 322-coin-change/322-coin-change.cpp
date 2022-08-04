class Solution {
public:
   
//     int dp[14][10001];
// int fun(vector<int> & v, int index,int target){
//         if(v.size()<=index) return 1e8;
//         if(target==0){
        
//             return 0;
//         }
//     if(dp[index][target]!=-1) return dp[index][target];
//         // cout<<" target "<<target<<endl;
//         if(v[index]<=target){
//            return dp[index][target]= min(1+fun(v,index,target-v[index]), fun(v,index+1,target));
     
//         }else{
//             return dp[index][target]= fun(v,index+1,target);
//         }
       
//     }
    
    
    int coinChange(vector<int>& v, int amount) {
        int n = v.size();

        int dp[n+1][amount+1];
             memset(dp,0,sizeof dp);
          for(int i=0; i<amount+1; i++){
        dp[0][i]=INT_MAX-1;
        
    }
       
        for(int i=1; i<=n; i++){
      for(int j=1; j<=amount; j++){
      if(v[i-1]<=j){
                dp[i][j]=min(dp[i][j-v[i-1]]+1,dp[i-1][j]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
    }
        }
        
        

      if(dp[n][amount]==INT_MAX-1) return -1;
        return dp[n][amount];
    
    }
};
class Solution {
public:
   
    int dp[14][10001];
int fun(vector<int> & v, int index,int target){
        if(v.size()<=index) return 1e8;
        if(target==0){
        
            return 0;
        }
    if(dp[index][target]!=-1) return dp[index][target];
        // cout<<" target "<<target<<endl;
        if(v[index]<=target){
           return dp[index][target]= min(1+fun(v,index,target-v[index]), fun(v,index+1,target));
     
        }else{
            return dp[index][target]= fun(v,index+1,target);
        }
       
    }
    
    
    int coinChange(vector<int>& v, int amount) {
        if (amount == 0 ) return 0;
                memset(dp,-1,sizeof dp);
int ans = fun(v,0,amount);

        if(ans==1e8) return -1;
        return ans;
    
    }
};
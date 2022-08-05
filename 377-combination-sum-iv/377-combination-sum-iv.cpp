class Solution {
public:
    int dp[201][10001];
    int fun(vector<int> & v , int target , int index){
        if(target==0){
            // cout<<"Ans"<<endl;
            return 1;
        }
        if(index>=v.size()) return 0;
   if(dp[index][target]!=-1) return dp[index][target];
       int a =0;
        for(int i=0; i<v.size(); i++){
            if(v[i]<=target){
               a+= fun(v,target-v[i],i);
            }
        }
        
        
        return dp[index][target]=a;
    }
    
    
    
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof dp);
        return fun(nums,target,0);
    }
};
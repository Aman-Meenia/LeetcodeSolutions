class Solution {
public:
    
    int dp[200][10001];
    bool fun(vector<int> & v, int index , int target){
        if(target==0) return true;
        if(index==v.size()) return false;
     if(dp[index][target]!=-1) return dp[index][target];
        if(v[index]<=target){
          return dp[index][target]= fun(v,index+1,target-v[index])||fun(v,index+1,target);;
        }else{
      return dp[index][target]=fun(v,index+1,target);
        }
    

    }
    bool canPartition(vector<int>& v) {
        memset(dp,-1,sizeof dp);
int sum=0;
for(auto a:v){
    sum+=a;
}
        if(sum%2){
            return false;
        }
        int target = sum/2;
        return fun(v,0,target);
        
        
    }
};
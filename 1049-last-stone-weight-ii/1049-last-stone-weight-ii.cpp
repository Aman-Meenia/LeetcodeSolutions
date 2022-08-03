class Solution {
public:
    
    
int dp[31][3001];
    bool fun(vector<int> & v , int index ,int target){
        if(target==0) return true;
        if(index>=v.size()) return false;
   if(dp[index][target]!=-1) return dp[index][target];
        int a = false , b = false;
        
        if(v[index]<=target){
       a = fun(v,index+1,target-v[index]);
        }
       b = fun(v,index+1,target);
        return  dp[index][target]=a||b;
    }
    
    
    
    int lastStoneWeightII(vector<int>& v) {
        int sum = 0;
        for(auto a:v) sum+=a;
        for(int i=sum/2; i>=0; i--){
            memset(dp,-1,sizeof dp);
            if(fun(v,0,i)){
                int a = sum-i;
                int b = i;
                return abs(a-b);
            }
            
        }
        return -1;
    }
};
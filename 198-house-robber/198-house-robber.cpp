class Solution {
public:
    int dp[101][2];
    int fun(vector<int> & v, int index,  int cnd){
        if(index>=v.size()) return 0;
        int a=0 , b=0; 
        if(dp[index][cnd]!=-1) return dp[index][cnd];
        if(cnd==true){
           a= fun(v,index+1,false);
        }else{
           a=v[index]+fun(v,index+1,true);
          b=  fun(v,index+1,false);
            
        }
        return dp[index][cnd]=max(a,b);
    }
    int rob(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return fun(v,0,false);
    }
};
class Solution {
public:
//     int dp[101][2];
//     int fun(vector<int> & v, int index,  int cnd){
//         if(index>=v.size()) return 0;
//         int a=0 , b=0; 
//         if(dp[index][cnd]!=-1) return dp[index][cnd];
//         if(cnd==true){
//            a= fun(v,index+1,false);
//         }else{
//            a=v[index]+fun(v,index+1,true);
//           b=  fun(v,index+1,false);
            
//         }
//         return dp[index][cnd]=max(a,b);
//     }
    int rob(vector<int>& v) {
        int n = v.size();
        int dp[n+2];
        memset(dp,0,sizeof dp);
        // int cnd = true;
        for(int i=n-1; i>=0; i--){
           
int  a = max(v[i]+dp[i+2],dp[i+1]);
            
            dp[i]=a;
            
        }
        
        
        return dp[0];
    }
};
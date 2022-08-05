#define ll long long
class Solution {
public:
//     int dp[10001];
//     int fun(vector<int> & v , int target){
//         if(target==0){

//             return 1;
//         }
//    if(dp[target]!=-1) return dp[target];
//        int a =0;
//         for(int i=0; i<v.size(); i++){
//             if(v[i]<=target){
//                a+= fun(v,target-v[i]);
//             }
//         }
        
        
//         return dp[target]=a;
//     }
    
    
    
    int combinationSum4(vector<int>& v, int target) {
        int n = v.size();
        ll dp[target+1];
        memset(dp,0,sizeof dp);
        
       dp[0]=1;
        for(int k=1; k<=target; k++){
            int a = 0;
               for(int i=0; i<v.size(); i++){
            if(v[i]<=k){
               a+= dp[k-v[i]];
            }
        }
        dp[k]=a;
            
        }

        
   
        
        
        
        return dp[target];
    }
};
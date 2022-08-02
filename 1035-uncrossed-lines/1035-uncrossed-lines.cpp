class Solution {
public:
    
    int dp[501][501];
    int fun(vector<int> & v1, vector<int> & v2 , int index1 , int index2){


        if(index1>=v1.size() || index2>=v2.size()){
            return 0;
        }
        if(dp[index1][index2]!=-1) return dp[index1][index2];
        
        
//          if we find the same number we choose it every time 
      if(v1[index1]==v2[index2]){
          return dp[index1][index2]=1 + fun(v1, v2, index1+1, index2+1);
      }else{
//  if both are differnt we have two option either we move one index in  first array or second  array and choose maximum from both 
    return dp[index1][index2]=max(fun(v1,v2,index1+1,index2),fun(v1,v2,index1,index2+1));
          
     
      }
    
    
    
    
    
    }
    
    
    
    
    
    int maxUncrossedLines(vector<int>& v1, vector<int>& v2) {
        memset(dp,-1,sizeof dp);
        return fun(v1,v2,0,0);
    }
};
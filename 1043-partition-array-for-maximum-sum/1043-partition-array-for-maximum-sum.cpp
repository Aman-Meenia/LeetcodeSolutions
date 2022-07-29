class Solution {
public:
    int dp[501];
    int fun(vector<int> & v , int index, int k , int maximum){
        int ans=INT_MIN;

        if(index>=v.size()) return 0;
           if(dp[index]!=-1) return dp[index];
        for(int i=index; i<v.size(); i++){
            maximum=max(maximum,v[i]);
            if(i<(index+k)){
 int temp=maximum*((i-index)+1) +fun(v,i+1,k,INT_MIN); 
                ans=max(ans,temp);
            }else{
                break;
            }
            
            
            
        }
        
        return dp[index]=ans;
        
        
        
    }
    int maxSumAfterPartitioning(vector<int>& v, int k) {
        memset(dp,-1,sizeof dp);
        return fun(v,0,k,INT_MIN);
    }
};
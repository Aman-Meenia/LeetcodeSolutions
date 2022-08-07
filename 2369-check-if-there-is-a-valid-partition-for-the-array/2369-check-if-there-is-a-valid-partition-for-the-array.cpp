class Solution {
public:
    
    bool validPartition(vector<int>& v) {
        
int n = v.size();
        int dp[n+1];
                memset(dp,0,sizeof dp);
        dp[n]=1;
        for(int i=n-1; i>=0; i--){
            int ans = 0;
             if(i+1<n && v[i]==v[i+1]){

           ans = ans | dp[i+2];
        }
        if(i+2<n && v[i]==v[i+1] && v[i+1]==v[i+2]){

            ans=ans|dp[i+3];
        }
        if(i+2<n && v[i]+1==v[i+1] && v[i+1]+1==v[i+2]){


            ans=ans|dp[i+3];
        }
            
            dp[i]=ans;
        }
        
        
        
        
        
        return dp[0];
    }
};
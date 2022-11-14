class Solution {
public:
    
    
    int fun(vector<int> & v){
                int n = v.size();
        vector<int> dp(n,0);
        
        int ans =0;

        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=0; j<i; j++){
                if(v[j]<v[i])
                cnt =max(cnt,dp[j]);
            }
            dp[i]=cnt+1;
            
        }
        for(auto a:dp){
            ans = max(ans,a);
        }
        return ans;
    }
    
    
    
    
    
    int lengthOfLIS(vector<int>& v) {
return fun(v);
    }
};
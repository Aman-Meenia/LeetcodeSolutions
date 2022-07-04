class Solution {
public:
    int findNumberOfLIS(vector<int>& v) {
        int n=v.size();
        
        
        vector<int> dp(n,1);
        vector<int> cnt(n,1);
        
        int ans=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(v[i]>v[j] && dp[j]+1>dp[i]){
                 dp[i]=dp[j]+1;
                    cnt[i]=cnt[j];
                }else if(v[i]>v[j] &&dp[i]==dp[j]+1 ){
   
                            cnt[i]+=cnt[j];
                    
                }
                
            }
            ans=max(ans,dp[i]);
        }
        
        int count=0;
        for(auto a:dp){
            cout<<a<<" ";
        }cout<<endl;
            for(auto a:cnt){
cout<<a<<" ";
            }cout<<endl;
        for(int i=0; i<n; i++){

            if(dp[i]==ans){
                count+=cnt[i];
            }
        }
        return count;
        
    }
};
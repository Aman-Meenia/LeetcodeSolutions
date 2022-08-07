class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> v;
        int ans =0;
        for(auto a:s){
            int t = a-'a';
            v.push_back(t);
        }
        
        // for(auto a:v){
        //     cout<<a<<" ";
        // }cout<<endl;
        int n = v.size();
vector<int> dp(26,0);
        for(int i=0; i<n; i++){
            dp[v[i]]=dp[v[i]]+1;
            for(int j=0; j<26; j++){
                if(abs(v[i]-j)<=k && v[i]!=j){
                    dp[v[i]]=max(dp[v[i]],dp[j]+1);
                }
            }
        }
        
        
        
        for(auto a:dp){
ans=max(ans,a);
            }
        

     
        return ans;
    }
};
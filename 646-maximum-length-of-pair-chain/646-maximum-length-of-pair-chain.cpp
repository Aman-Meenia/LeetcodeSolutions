class Solution {
public:
    int findLongestChain(vector<vector<int>>& v) {
        
        int n = v.size();
        sort(v.begin(),v.end());
        vector<int> dp(n,1);
        for(int i=0; i<n; i++){
            int c = v[i][0];
            int d = v[i][1];
            for(int j=0; j<i; j++){
                int a = v[j][0];
                int b = v[j][1];
                if(c>b){
                    dp[i]=max(dp[i],dp[j]+1);                }
            }
        }
        int ans = 1;
        for(auto a:dp){
            ans = max(ans,a);
        }
        return ans;
        
    }
};

// 1 2 
//     4 5  
//         7 8 
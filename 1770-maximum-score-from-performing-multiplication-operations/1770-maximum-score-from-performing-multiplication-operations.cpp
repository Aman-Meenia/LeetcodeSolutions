class Solution {
public:
    int dp[1001][1001];
    int maximumScore(vector<int>& nums, vector<int>& multi) {
        int n = nums.size();
        int m = multi.size();
        for(int i = m - 1; i >= 0; --i){
            for(int s = 0; s <= i; ++s){
                int e = n - 1 - i + s;
                // cout<<i<<" "<<s<<" "<<e<<endl;
                if(i == m - 1)dp[s][i] = max(multi[i] * nums[s], multi[i] * nums[e]);
                else dp[s][i] = max(
                    multi[i] * nums[s] + dp[s + 1][i + 1],
                    multi[i] * nums[e] + dp[s][i + 1]
                );
            }
        }
        return dp[0][0];
    }
};
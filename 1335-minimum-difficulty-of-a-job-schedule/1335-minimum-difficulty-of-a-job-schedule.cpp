class Solution {
	int solve(int idx, vector<int>& arr,int d , vector<vector<int>>& dp){
		if(idx == arr.size() or d == 0){
			if(idx == arr.size() and d == 0) return 0;
			else return 1e5;
		}

		if(dp[idx][d] != -1) return dp[idx][d];
		int maxx = 0;
		int ans = 1e5;
		for(int i = idx ; i < arr.size() ; i++){
			maxx = max(maxx,arr[i]);
			int tempAns = solve(i + 1, arr , d-1,dp) + maxx;
			ans = min(ans,tempAns);
		}
		return dp[idx][d] = ans;
	}
public:
	int minDifficulty(vector<int>& arr, int d) {
		vector<vector<int>> dp(arr.size(),vector<int>(d+1,-1));
		int idx = 0;
		int ans = solve(idx,arr,d,dp);
		if(ans >= 1e5) return -1;
		return ans;
	}
};
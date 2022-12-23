//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
int dp[1025][11];
int fun(vector<vector<int> > & v,int mask , int current_city , int visited  ){


if(visited==mask){
    return v[current_city][0];
}

// if(dp[mask][current_city]!=-1) return dp[mask][current_city];
int ans = INT_MAX;



for(int i=0; i<v.size(); i++){

if((mask&(1<<i))==0){
    int current_ans = v[current_city][i]+fun(v,mask|1<<i,i,visited);
    ans = min (ans , current_ans);
}

}

return dp[mask][current_city]=ans;

}


int total_cost(vector<vector<int>>cost){
    int n = cost.size();
    int visited=(1<<n)-1;
    memset(dp,-1,sizeof dp);
    return fun(cost,1,0,visited);    // Code here
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>cost(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)cin >> cost[i][j];
		Solution obj;
		int ans = obj.total_cost(cost);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
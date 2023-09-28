//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
   
    int shortestCommonSupersequence(string s, string t, int n, int m)
    {
        int dp[n+1][m+1];
        memset(dp,0,sizeof dp);
        int temp =0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                int ans1=0, ans2=0, ans3=0;
                if(s[i-1]==t[j-1]){
                    ans1=1+dp[i-1][j-1];
                }else{
                    ans2=dp[i][j-1];
                    ans3=dp[i-1][j];
                }
                
                dp[i][j]=max(ans3,max(ans1,ans2));
                // temp=max(temp,dp[i][j]);
            }
        }
       int ans = n-dp[n][m];
       return ans+m;
        //code here
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends
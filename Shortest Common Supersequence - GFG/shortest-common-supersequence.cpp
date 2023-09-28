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
    int dp[101][101];
int Longest_Common_Subsequence(string &s, string &t, int i , int j){

if(i==s.size() ||j==t.size()){
    return 0;
}

if(dp[i][j]!=-1) return dp[i][j];
int ans = 0 ,ans1=0,ans2=0;
if(s[i]==t[j]){
   ans =  1+Longest_Common_Subsequence(s,t,i+1,j+1);
}else{
     ans1=   Longest_Common_Subsequence(s,t,i,j+1);
     ans2= Longest_Common_Subsequence(s,t,i+1,j);
}


return dp[i][j]=max(ans,max(ans1,ans2));
}
    int shortestCommonSupersequence(string s, string t, int n, int m)
    {
        memset(dp,-1,sizeof dp);
        int temp = Longest_Common_Subsequence(s,t,0,0);
        int ans = n-temp;
        ans+=m;
       return ans;
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
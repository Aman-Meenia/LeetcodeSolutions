//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  
int dp[1001][1001];

int fun(string s , string t , int i , int j){
      if(i>=j){
          if(i==j) return 1;
          return 0;
      }
      if(dp[i][j]!=-1) return dp[i][j];
      int ans1 =0, ans2= 0, ans3=0;
      if(s[i]==t[j]){
return dp[i][j]=2+fun(s,t,i+1,j-1);
      }else{
        ans2= fun(s,t,i,j-1);
        ans3= fun(s,t,i+1,j);
return dp[i][j]=max(ans2,ans3);
      }
             
 
  }


    int longestPalinSubseq(string A) {
  int size = A.size();
  string s =A;
  memset(dp,-1,sizeof dp);
 return fun(A,s,0,size-1);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define  ll long long
class Solution {
  public:
  ll dp[100][100];
  ll fun(int n , int m , int target){

if(target==0 && n==0){
    return 1;
}
if(n==0 || target==0){
    return 0;
}
if(dp[n][target]!=-1) return dp[n][target];
ll ans =0;
for(int k=1; k<=m; k++){
    if(k<=target){
      ans +=fun(n-1,m,target-k);
    }
}


return dp[n][target]=ans;

}





    long long noOfWays(int m, int n , int X) {
        // code here
        memset(dp,-1,sizeof dp);
        
    return   fun(n,m,X);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends
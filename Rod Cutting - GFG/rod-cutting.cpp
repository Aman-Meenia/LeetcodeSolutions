//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  



int dp[10001];
int Rod_Cutting(int v[] , int n){
 
int ans =0;
if(n==0){
    return 0;
}
if(dp[n]!=-1) return dp[n];
for(int i=1; i<=n; i++){

int temp =v[i-1]+Rod_Cutting(v,n-i);
ans = max(ans,temp);
}



return dp[n]=ans;




}


    int cutRod(int price[], int n) {
        //code here
        memset(dp,-1,sizeof dp);
        return Rod_Cutting(price,n);

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
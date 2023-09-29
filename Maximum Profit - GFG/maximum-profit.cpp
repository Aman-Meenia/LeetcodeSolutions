//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int dp[501][501][2];
  int fun(vector<int> &v, int i , int k ,int cnd){
      // cout<<"AmanMeenia "<<endl;
      if(k==0){
          return 0;
      }
      if(i>=v.size()){
          return 0;
  }
  if(dp[i][k][cnd]!=-1) return dp[i][k][cnd];
int a ,b;
// cout<<"AmanMeenia "<<endl;
  if(cnd==true){
      
     a=fun(v,i+1,k,false)-v[i];
    b= fun(v,i+1,k,true);

      
  }else{
    a = fun(v,i+1,k-1,true)+v[i];
     b = fun(v,i+1,k,false);
      
    
  }

  
  
  return dp[i][k][cnd]=max(a,b);

      
  }
  
  
    int maxProfit(int k, int n, int t[]) {
        // code here
        vector<int> v;
        for(int i=0; i<n; i++){
            v.push_back(t[i]);
        }
        memset(dp,-1,sizeof dp);
        return fun(v,0,k,true);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends
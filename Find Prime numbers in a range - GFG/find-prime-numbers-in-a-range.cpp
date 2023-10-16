//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int n) {
        // code here
        
        vector<int> ans(n+5,1);
        ans[0]=0;
        ans[1]=0;
        for(int i=2; i*i<=n; i++){
            int cnt = 0;
            for(int k=i*i; k<=n; k+=i){
               ans[k]=0; 
            }
            
            
        }
        vector<int> t;
        for(int i=M; i<=n; i++) {
            if(ans[i]==1) t.push_back(i);
        }
        return t;
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends
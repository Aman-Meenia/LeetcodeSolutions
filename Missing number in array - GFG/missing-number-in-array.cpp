//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
  
 void cyclesort(vector<int> &v){
      int n = v.size();
      int i = 0;
      while(i<n){
          int temp = i+1;
        while(v[i]<=n && v[i]!=temp){

              swap(v[i],v[v[i]-1]);
          }
         
          
          i++;
      }
  }


  
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        cyclesort(array);
        for(int i=0; i<n; i++){
            if(array[i]!=i+1){
                return i+1;
            }
        }
        return n;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
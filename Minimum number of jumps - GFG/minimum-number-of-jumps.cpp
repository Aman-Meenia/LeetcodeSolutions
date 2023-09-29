//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int v[], int n){
        // Your code here
        
        int end = v[0];
int cnt =1;
int total= 0;

for(int i=1; i<n; i++){
if(end>=n-1){
    return cnt ;
}
if(i>end) {
   return -1;
}
total =max(i+v[i],total);
if(i==end){
    end = total;
    cnt++;
}



}




    return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
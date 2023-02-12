//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    // bool fun(int v[], int k , int n){
    //     int low=0;
    //     int high = n-1;
    //     while(low<=high){
    //         int mid =low +(high-low)/2;
    //         if(v[mid]==k) return true;
    //     if(v[mid]>k){
    //         high=mid-1;
    //     }else{
    //         low=mid+1;
    //     }
    //     low++;
    //     high--;
    //     }
    //     return false;
    // }
    int searchInSorted(int arr[], int N, int K) 
    { 
        for(int i=0; i<N; i++){
            if(arr[i]==K) return 1;
        }
        return -1;
    
       // Your code here
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends
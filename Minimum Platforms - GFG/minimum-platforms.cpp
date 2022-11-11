//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        
        sort(arr,arr+n);
        sort(dep,dep+n);
        
        priority_queue<int,vector<int> ,greater<int> >pq;
        pq.push(dep[0]);
        int ans = 1;
        for(int i=1; i<n; i++){
            while(!pq.empty() && pq.top()<arr[i]){
                pq.pop();
            }
            pq.push(dep[i]);
            int pqsize=pq.size();
            ans = max(ans,pqsize);
        }
        
        return ans;
        
        
        
    	// Your code here
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  int n ;
  
//   bool fun(int v[] , int i, int target){
      
      
//       if(target==0){
//         //   cout<<"YES "<<endl;
//           return 1;
//       }
//       if(i>=n) return 0;
//       bool ans1=false,ans2=false;
//       if(v[i]<=target){
//          ans1= fun(v,i+1,target-v[i]);
//       }
//     ans2=  fun(v,i+1,target);
      
//       return ans1||ans2;
      
//   }
  
  
	int minDifference(int v[], int N)  { 
	    // Your code goes here
	    n=N;
	    int sum =0;
	    for(int i=0; i<n; i++){
	        sum+=v[i];
	    }
	    int target = sum/2;
	    int dp[n+1][target+1];
	    memset(dp,0,sizeof dp);
	    for(int i=0; i<=n; i++){
	        dp[i][0]=1;
	    }
	    
	    int ans =0;
	    for(int i=1; i<=n; i++){
	        for(int j=1; j<=target; j++){
	            bool ans1= false,ans2=false;
	            if(v[i-1]<=j){
	                ans1=dp[i-1][j-v[i-1]];
	            }
	            ans2=dp[i-1][j];
	            dp[i][j]=ans1||ans2;
	            if(dp[i][j]==1){
	                ans=max(ans,j);
	            }
	        }
	        
	        
	    }
	    
	   // cout<<" sum "<<sum<<endl;
	   // cout<<" target "<<target<<endl;
	   // cout<<"asn "<<ans<<endl;
	    
	    sum=sum-target;
	    
	   // fun(v,0,12);
	    return sum-ans+(target-ans) ;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
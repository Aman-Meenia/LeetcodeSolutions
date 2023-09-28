//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
#define ll long long 
class Solution{
    public:
    
    ll dp[1001][1001];
ll Optimal_Game_Strategy(vector<int> & v , int start , int end){

if(end==start){
    return v[end];
}
if(end<start){
    return 0;
}
if(dp[start][end]!=-1) return dp[start][end];

int ans1 =v[start]+Optimal_Game_Strategy(v,start+2,end);
int ans2 = v[start]+Optimal_Game_Strategy(v,start+1,end-1);
int ans3 = v[end]+Optimal_Game_Strategy(v,start,end-2);
int ans4 = v[end]+Optimal_Game_Strategy(v,start+1,end-1);

int ans5=min(ans1,ans2);
int ans6 =min(ans3,ans4);
return dp[start][end]=max(ans5,ans6);



}

    
    long long maximumAmount(int arr[], int n){
        vector<int> v;
        for(int i=0; i<n; i++){
            v.push_back(arr[i]);
        }
        memset(dp,-1,sizeof dp);
        // Your code here
      return   Optimal_Game_Strategy(v,0,n-1);
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends
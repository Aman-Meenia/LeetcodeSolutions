//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
//     int dp[1001][1001];

// int Knapsack(int v[] , int wt[] , int i , int weight){

// if(weight==0 || i<0){
//     return 0;
// }
// if(dp[i][weight]!=-1) return dp[i][weight];

// int ans1 =0 , ans2 =0;
// if(wt[i]<=weight){
//   ans1= v[i]+Knapsack(v,wt,i-1,weight-wt[i]);
// }
// ans2 = Knapsack(v,wt,i-1,weight);


// return dp[i][weight]=max(ans1,ans2);



// }

    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int weight, int wt[], int v[], int n) 
    { 
        
        // memset(dp,-1,sizeof dp);
        int dp[n+1][weight+1];
memset(dp,0,sizeof dp);

for(int i=1; i<=n; i++){
    for(int j=1; j<=weight; j++){
        int ans1 = 0, ans2=0;;
if(wt[i-1]<=j){
   ans1= v[i-1]+dp[i-1][j-wt[i-1]];
}
ans2 = dp[i-1][j];


dp[i][j]=max(ans1,ans2);
    }
}



        return dp[n][weight];
       // Your code here
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
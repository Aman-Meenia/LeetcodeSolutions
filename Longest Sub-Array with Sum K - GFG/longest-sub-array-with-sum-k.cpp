//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int v[],  int n, int k) 
    { 
        int ans = 0;
        unordered_map<int,int> mp;
mp[0]=-1;
int sum = 0;
        for(int i=0; i<n; i++){
            sum+=v[i];
            int temp = sum-k;
            if(mp.find(temp)!=mp.end()){
                ans = max(ans,i-mp[temp]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return ans;
        // Complete the function
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
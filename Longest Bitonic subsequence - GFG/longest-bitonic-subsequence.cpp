// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>v)
	{
	    
	    int n=v.size();
	    vector<int> dp1(n,1);
	       vector<int> dp2(n,1);
	    for(int i=0; i<n; i++){
	        for(int j=0; j<i; j++){
	            if(v[j]<v[i]&&dp1[j]+1>dp1[i]){
	                dp1[i]=dp1[j]+1;
	            }
	        }
	        
	    }
	    reverse(v.begin(),v.end());
	     for(int i=0; i<n; i++){
	        for(int j=0; j<i; j++){
	            if(v[j]<v[i]&&dp2[j]+1>dp2[i]){
	                dp2[i]=dp2[j]+1;
	            }
	        }
	        
	    }
	    reverse(dp2.begin(),dp2.end());
	    int ans=1;
	    
	    for(int i=0; i<n; i++){
	        int temp=dp1[i]+dp2[i];
	        ans=max(ans,temp);
	    }
	    
return ans-1;

	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
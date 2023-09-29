//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    /*You are required to complete this method*/
    static int cmp(vector<int> & a ,vector<int> &b){
        return a[1]<b[1];
    }
    
    
    
    int maxChainLen(struct val p[],int n){
        //Your code here
        vector<vector<int> > v;
        for(int i=0; i<n; i++){
            // cout<<p[i].first<<" "<<p[i].second<<endl;
            v.push_back({p[i].first,p[i].second});
        }
        
        sort(v.begin(),v.end(),cmp);
        int ans =1;
        // vector<int> dp(n,1);
        // dp[0]=1;
        vector<int> t;
        
        for(int i=0; i<n; i++){
            
            if(t.size()==0 ||v[i][0]>t.back()){
                t.push_back(v[i][1]);
            }
           
        }
        
        
        
        return t.size();
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends
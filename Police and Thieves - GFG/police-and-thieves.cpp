//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        
        vector<int> v;
        
        for(int i=0; i<n; i++){
            if(arr[i]=='P'){
                v.push_back(i);
            }
        }
        int ans =0;
        int index = 0;
        int size = v.size();
        for(int i=0; i<n; i++){
            if(arr[i]=='P')continue;
        while(index<size &&abs(v[index]-i)>k && v[index]<i){
            index++;
        }
        if(index>=size) break;
        if(abs(v[index]-i)<=k)
{      ans+=1;
            index+=1;
}
        }
        return ans;
        
        
        // Code here 
    }
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 


// } Driver Code Ends
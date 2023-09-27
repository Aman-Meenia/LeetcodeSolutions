//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int n)
    {
        // code here
        vector<int> ans;
        vector<int> v={1,2,5,10,20,50,100,200,500,2000};
        int index = 9;
        while(n>0){
            if(v[index]>n){
                index--;
            }else{
                int t = n/v[index];
                n=n%v[index];
                for(int i=0; i<t; i++){
                    ans.push_back(v[index]);
                }
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
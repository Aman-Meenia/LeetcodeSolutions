//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int k = 0;
        // cout<<(m&(1<<k))<<" . "<<(n&(1<<k))<<endl;
        while((m&(1<<k))==(n&(1<<k)) && k<32){
            k++;
        }
        // cout<<" k "<<k<<endl;
        if(k>31) return -1;
        return k+1;
        
        
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends
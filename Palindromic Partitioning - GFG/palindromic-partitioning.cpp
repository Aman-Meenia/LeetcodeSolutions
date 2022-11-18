//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define ll long long
class Solution{
public:
ll dp[505][505];
bool ispalindrome(string s){
    int low= 0;
    int high = s.size()-1;
    while(low<=high){
        if(s[low]!=s[high]) return false;
        low++;
        high--;
    }
    return true;
}

ll fun(string &s , int low , int index){

if(index==s.size()){
    if(low==s.size()){
        return -1;
    }
    return INT_MAX;
}
if(dp[low][index]!=-1) return dp[low][index];
int ans1=INT_MAX , ans2 =INT_MAX;
if(ispalindrome(s.substr(low,index-low+1))){

ans1 = 1+fun(s,index+1,index+1);
}
ans2=fun(s,low,index+1);

return dp[low][index]=min(ans1,ans2);


}

    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof dp);
        return fun(str,0,0);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
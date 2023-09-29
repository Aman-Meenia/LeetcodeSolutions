//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool ispalindrome(string & s, int low , int high ){
while(low<=high){
if(s[low]!=s[high]) return false;
low++;
high--;
}

return true;
}
int dp[501];
int fun2(string &s , int i){
int n = s.size();
if(i>=n){
    return 0;
}
int ANS =INT_MAX;
string t;
if(dp[i]!=-1) return dp[i];
for(int k=i; k<n; k++){
    t.push_back(s[k]);

    if(ispalindrome(t,0,t.size()-1)){
    int   t=1+fun2(s,k+1);
       ANS=min(ANS,t);
    }
 

}

return dp[i]=ANS;
}


    int palindromicPartition(string s)
    {
        memset(dp,-1,sizeof dp);
        return fun2(s,0)-1;
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
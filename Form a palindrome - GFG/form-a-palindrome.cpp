//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  

int dp[1001][1001];
int fun(string &s , string &s2 , int i , int j){
    if(i==s.size()||j==s.size()) return 0;
if(dp[i][j]!=-1) return dp[i][j];
int ans1=0, ans2=0,ans3=0;
if(s[i]==s2[j]){
    ans1=1+fun(s,s2,i+1,j+1);
}else{
   ans2 =fun(s,s2,i+1,j);
   ans3= fun(s,s2,i,j+1);
}

return dp[i][j]=max(max(ans1,ans2),ans3);




}










    int countMin(string s){
    //complete the function here
int n = s.size();
memset(dp,-1,sizeof dp);

string t= s;
reverse(t.begin(),t.end());

return n-fun(s,t,0,0);

    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends
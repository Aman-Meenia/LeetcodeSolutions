//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int dp[505][505];
    int fun(string &s1 ,string &s2 , int index1 , int index2){
        if(index1==s1.size()){
            
return s2.size()-index2;
            }else if(index2==s2.size()){
            return s1.size()-index1;
        }
        if(dp[index1][index2]!=-1) return dp[index1][index2];
 int ans1 = INT_MAX  , ans2 =  INT_MAX , ans3 =  INT_MAX, ans4 =  INT_MAX;
        if(s1[index1]==s2[index2]){
            ans1=fun(s1,s2,index1+1,index2+1);
        }else{
//             INSERT A WORD;
            ans2=1+fun(s1,s2,index1,index2+1);
//             DELETE A WORD
            ans3=1+fun(s1,s2,index1+1,index2);
//              Replace a word
            ans4=1+fun(s1,s2,index1+1,index2+1);
     
            
        }
               ans1=min(ans1,ans2);
            ans3=min(ans3,ans4);
            return dp[index1][index2]= min(ans1,ans3);
        
    }
    int editDistance(string s, string t) {
        // Code here
          memset(dp,-1,sizeof dp);
      return fun(s,t,0,0);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
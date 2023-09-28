//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
unordered_set<string> mp;
int dp[1001];
int fun(string &s , int index){
    int n = s.size();
    if(index>=n) return 1;
    string t;
    int ans =0;
    if(dp[index]!=-1) return dp[index];
    for(int k=index; k<n; k++){
        t.push_back(s[k]);
        // cout<<" t "<<t<<endl;
        if(mp.find(t)!=mp.end()){
         ans+=fun(s,k+1);
        }
    }
    return dp[index]=ans;
    
}



    int wordBreak(string s, vector<string> &B) {
        //code here
        for(auto it:B){
            // cout<<it<<" ";
        mp.insert(it);
        }
        memset(dp,-1,sizeof dp);
        
        return fun(s,0)>0 ?1 :0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends
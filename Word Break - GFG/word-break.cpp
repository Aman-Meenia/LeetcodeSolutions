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
set<string>st;
bool fun(string &s , int low , int index){
    if(index==s.size()){
        if(low==s.size()){
            return true;
        }
        return false;
    }

bool ans1=false,ans2=false;

    if(st.find(s.substr(low,index-low+1))!=st.end()){
       ans1= fun(s,index+1,index+1);
    }
    ans2=fun(s,low,index+1);
return ans1||ans2;



}
    int wordBreak(string A, vector<string> &B) {
        //code here
    for(auto it:B){
        st.insert(it);
    }
    
    if(fun(A,0,0)){
        return 1;
    }
    return 0;
        
        
        
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
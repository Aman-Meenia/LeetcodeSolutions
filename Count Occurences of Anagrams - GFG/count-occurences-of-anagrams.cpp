//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string target, string s) {
	    int n = s.size();
// cout<<"n is "<<n<<endl;
int low = 0;
int high = 0;
unordered_set<char> st;
int ANS=0;
vector<int> dp(26,0);
for(auto it:target){
    st.insert(it);
    dp[it-'a']+=1;
}
int size = st.size();
// cout<<"st.size()  "<<size<<endl;
vector<int> ans(26,0);
int cnt = 0;
while(high<n){
int t= s[high]-'a';
if(ans[t]==dp[t]&&dp[t]!=0){
    cnt--;
}
ans[t]+=1;
if(ans[t]==dp[t]){
    cnt++;
}
// cout<<"HELLO "<<endl;
// for(auto a:dp){
//     cout<<a<<" ";
// }cout<<endl;
// for(auto a:ans){
//     cout<<a<<" ";
// }cout<<endl;

if(high-low+1==target.size()){
    
    if(cnt==st.size()) ANS++;
int tt = s[low]-'a';
if(ans[tt]==dp[tt]){
    cnt--;
}
ans[tt]--;
if(ans[tt]==dp[tt] &&ans[tt]!=0){
    cnt++;
}
low++;

}
high++;
}
// cout<<"ANS "<<ANS<<endl;
return ANS;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
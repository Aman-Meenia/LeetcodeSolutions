//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int countSubstring(string s) {
        // Code here
      int size = s.size();
        // cout<<size<<endl;
       int ans = 0; 
        int low = 0;
        int high = 0;
      
        unordered_map<char,int> mp;
        int cnt = 0;
        while(high<size){
            mp[s[high]]+=1;
            
            int tt =0;
        if(mp.size()==3){
            ans+=size-high;
            tt= size-high;
        }
        int cnt =0;
        while(mp.size()>=3){
            mp[s[low]]-=1;
            if(mp[s[low]]==0){
                auto it = mp.find(s[low]);
                mp.erase(it);
            }
            cnt ++;
            low++;
        }
        if(cnt>0){
            cnt-=1;
            ans+=tt*cnt;

        }
        high++;
            
            
        }
        return ans;
        
        
        
    }
    
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
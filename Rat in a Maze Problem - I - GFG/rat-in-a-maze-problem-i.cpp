//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    //  R , L , D , U 
    unordered_map<int,char> mp;
    vector<string> ans;
    void fun(vector<vector<int> > & v , int x , int y,vector<vector<int> > & vis,string &temp ){
        int array1[4]={0,0,1,-1};
        int n = v.size();
        int array2[4]={1,-1,0,0};
        if(x==n-1 && y==n-1) {
            
           ans.push_back(temp);
        return;
            
        }
        for(int i=0; i<4; i++){
            int a = x+array1[i];
            int b = y+array2[i];
            if(a>=0 && b>=0 && a<n && b<n &&v[a][b]==1 &&vis[a][b]==0){
                // cout<<"a "<<a<<"b "<<b<<endl;
                vis[a][b]=1;
                temp.push_back(mp[i]);
                fun(v,a,b,vis,temp);
                temp.pop_back();
                vis[a][b]=0;
                }
            
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &v, int n) {
        if(v[0][0]==0 ||v[n-1][n-1]==0) return ans;
        // Your code goes here
        mp[0]='R';
        mp[1]='L';
        mp[2]='D';
        mp[3]='U';
        vector<vector<int> > vis(n,vector<int>(n,0));
        vis[0][0]=1;
        string t;
        fun(v,0,0,vis,t);
        sort(ans.begin(),ans.end());

        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
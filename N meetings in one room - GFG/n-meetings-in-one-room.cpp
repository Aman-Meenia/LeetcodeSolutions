//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
           vector<vector<int> > v;
        for(int i=0; i<n; i++){
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end());
        // for(auto a:v){
        //     cout<<a[0]<<" "<<a[1]<<endl;
        // }
        int temp = v[0][1];
        int ans= 1;
        for(int i=1; i<n; i++){
            if(v[i][0]>temp){
                // cout<<" i "<<i<<endl;
                temp = v[i][1];
            ans++;
            }else if(v[i][1]<temp){
                temp = v[i][1];
            }
        }
        return ans;
        // Your code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
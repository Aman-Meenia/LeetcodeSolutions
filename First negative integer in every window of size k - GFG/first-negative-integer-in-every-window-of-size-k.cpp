//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

#define ll long long
vector<long long> printFirstNegativeInteger(long long int v[],
                                             long long int N, long long int K) {
    ll size = N;
int low = 0;
int high = 0;
vector<ll> ans;
priority_queue<pair<ll,ll> ,vector<pair<ll,ll> > ,greater<pair<ll,ll> > > pq;
while(high<size){
if(v[high]<0){
    pq.push({high,v[high]});
}

    if(high-low+1==K){
while(!pq.empty()&&pq.top().first<low){
    pq.pop();
}

if(pq.size()>0){
    ans.push_back(pq.top().second);

}else{
    ans.push_back(0);
}
low++;
    }
    high++;
}
return ans;

                                             
 }
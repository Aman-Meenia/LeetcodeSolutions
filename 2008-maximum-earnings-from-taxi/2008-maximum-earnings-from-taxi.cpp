#define ll long long
class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& v) {
       
        sort(v.begin(),v.end());
      priority_queue<ll,vector<ll>  > maxpq;
priority_queue<pair<ll,ll> ,vector<pair<ll,ll>> ,greater<pair<ll,ll> > > pq;  
int size = v.size();
//         for(int i=1; i<n; i++){
//             ll profit = v[i][1]-v[i][0]+v[i][2];
//          while(!pq.empty() && pq.top().first()<=v[i][0]){
//                 maxpq.push(pq.top().second);
//                 pq.pop();
//             }   
            
            
            
// if(!maxpq.empty()){
//     profit+=maxpq.top();
// }
            
//             pq.push_back({v[i][1],profit});
//         }
        int t = 0;
        for(ll i=0; i<n; i++){
while(!pq.empty() && pq.top().first<=i){
                maxpq.push(pq.top().second);
                pq.pop();
            }
while(t<size && v[t][0]<=i){
    ll profit = v[t][1]-v[t][0]+v[t][2];
if(!maxpq.empty()){
    profit+=maxpq.top();
}
            
   pq.push({v[t][1],profit});


t++;
}


}
           while(!pq.empty() &&pq.top().first<=n){
                maxpq.push(pq.top().second);
                pq.pop();
            }
        return maxpq.top();
        
        
        
    }
};
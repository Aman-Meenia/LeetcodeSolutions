#define ll long long 
class Solution {
public:
    static ll cmp(vector<ll> &a, vector<ll> &b){

    return a[1]<b[1];
}
    int mostBooked(int N, vector<vector<int>>& meeting) {
      int ans =0;
        sort(meeting.begin(),meeting.end());
        priority_queue<pair<ll,ll> ,vector<pair<ll,ll>>,greater<pair<ll,ll> >> pq;
        vector<ll> V(N,0);
        set<ll> st;
        for(int i=0; i<N; i++){
            st.insert(i);
        }
        int size = meeting.size();
        for(int i=0; i<size; i++){
            
            ll start = meeting[i][0];
            // cout<<" start "<<start<<endl;
            while(!pq.empty() && pq.top().first<=start){
                // cout<<"Top "<<pq.top().first<<endl;
                st.insert(pq.top().second);
                pq.pop();
            }
     
            if(st.size()>0){
                ll end = meeting[i][1];

                ll top = *st.begin();
                  
                V[top]+=1;
     // cout<<"Add "<<top<<endl;
                pq.push({end,top});
          auto it = st.find(*st.begin());
                st.erase(it);
            }else{
                ll temp1 = pq.top().first;
            vector<vector<ll> > tt;
                while(!pq.empty() && pq.top().first<=temp1){
                      // cout<<"Top "<<pq.top().first<<endl;
                    // st.insert(pq.top().second);
                    tt.push_back({pq.top().first,pq.top().second});
                    pq.pop();
                }
                sort(tt.begin(),tt.end(),cmp);
                for(int i=0; i<tt.size(); i++){
                    if(i==0){
                          st.insert(tt[i][1]);
                    }else
                    pq.push({tt[i][0],tt[i][1]});
                }
                
                
                  ll end = meeting[i][1];
                ll extraadd= temp1;
                ll top = *st.begin();
                V[top]+=1;
                    // cout<<"Add "<<top<<endl;
                pq.push({end-start+extraadd,top});
                 auto it = st.find(*st.begin());
                st.erase(it);
                
            }
            
            
            
            
        }
int maxval=INT_MIN;
        for(int i=0; i<N; i++){
if(V[i]>maxval){
    maxval=V[i];
    ans = i;
}
        }
        
      return ans;  
        
        
        
    }
};
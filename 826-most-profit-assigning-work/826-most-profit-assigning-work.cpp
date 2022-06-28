class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int> >v;
        for(int i=0; i<profit.size(); i++){
            v.push_back({difficulty[i],profit[i]});
        }
        sort(v.begin(),v.end());
        
        priority_queue<int,vector<int> > pq;
        sort(worker.begin(),worker.end());
      
        int ans=0;
         int t=0;
        for(int i=0; i<worker.size(); i++){
            
            while(t<v.size() && v[t].first<=worker[i]){
                // cout<<" t is "<<t<<endl;
                pq.push(v[t].second);
                t+=1;
            }
            if(pq.size()>0){
            ans+=pq.top();
            }
        }
        return ans;
        
    }
};
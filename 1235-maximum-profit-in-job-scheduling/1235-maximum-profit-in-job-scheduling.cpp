class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& prf) {
        
        
priority_queue<int,vector<int>  > maxpq;
priority_queue<pair<int,int> ,vector<pair<int,int>> ,greater<pair<int,int> > > pq;
        int size = startTime.size();
        vector<vector<int > > v;
        for(int i=0; i<size; i++){
            v.push_back({startTime[i],endTime[i],prf[i]});
         // 
        }

        sort(v.begin(),v.end());
        
for(int i=0; i<size; i++){
int start = v[i][0];
    int end = v[i][1];
    int profit = v[i][2];
    while(!pq.empty() && pq.top().first<=start){
        maxpq.push(pq.top().second);
        pq.pop();
        
    }
if(maxpq.size()>0){
    profit+=maxpq.top();
}
    pq.push({end,profit});
    
    
}
          while(!pq.empty() && pq.top().first<=INT_MAX){
        maxpq.push(pq.top().second);
        pq.pop();
        
    }
        
        
        
      return maxpq.top();  
        
        
        
    }
};
class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<pair<int,int> ,vector<pair<int,int> > ,greater<pair <int,int> > > pq;
        int n = apples.size();
       int day = 1;
        int ans = 0;
        for(int i=0; i<n; i++){
            pq.push({day+days[i],apples[i]});
            
            
            while(!pq.empty() && pq.top().first<=day){
                pq.pop();
            }
            if(!pq.empty()){
                
                int a = pq.top().first;
                int b = pq.top().second;
               pq.pop();
                if(b>=1){
                    ans++;
                    b--;
                    if(b>0){
                    pq.push({a,b});
                    }
                }
            }
            
            
            
            
            
            
            
            
            day++;
        }
        
        while(!pq.empty()){
             
            while(!pq.empty() && pq.top().first<=day){
                pq.pop();
            }
            if(!pq.empty()){
                
                int a = pq.top().first;
                int b = pq.top().second;
               pq.pop();
                if(b>=1){
                    ans++;
                    b--;
                    if(b>0){
                    pq.push({a,b});
                    }
                }
            }
            
            day++;
        }
        return ans;
        
        
    }
};
#define ll long long 
class Solution {
public:
    int minRefuelStops(int target, int startfuel, vector<vector<int>>& stations) {
       int n = stations.size();
        int ans = 0;
        sort(stations.begin(),stations.end());
        priority_queue<int,vector<int>> pq;

        int temp=0;
        ll maxrange=startfuel;
        if(maxrange>=target) return 0;
        
       do{
          
            
                while(temp<n && stations[temp][0]<=maxrange){
pq.push(stations[temp][1]);
                    temp++;
                    
                }
           // cout<<pq.size()<<endl;
           if(pq.size()>0){
               
            maxrange+=pq.top();
               // cout<<"maxrange "<<maxrange<<endl;
               
            pq.pop();
           }
            ans+=1;
        if(maxrange>=target) return ans;
            
            
        } while(pq.size()>0 || temp<n && stations[temp][0]<=maxrange);
        
        
        
        return -1;
    }
};
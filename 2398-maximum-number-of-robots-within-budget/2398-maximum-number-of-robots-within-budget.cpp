#define ll long long
class Solution {
public:
    int maximumRobots(vector<int>& charge, vector<int>& running, long long budget) {
        int ans = 0;
        priority_queue<pair<int,int> ,vector<pair<int,int>>  >  pq;
    int size = charge.size();
        int low = 0;
        int high = 0;
        
        ll sum = 0;
        int maximum=INT_MIN;
        while(high<size){
            pq.push({charge[high],high});
            sum+=running[high];
            while(!pq.empty()&&pq.top().second<low){
                pq.pop();
            }
            
            
            ll tt = pq.top().first;
            int k = high-low+1;
            ll totalcost=pq.top().first+k*sum;
            while(low<=high && totalcost>budget){
                sum-=running[low];
                 while(!pq.empty()&&pq.top().second<low){
                pq.pop();
            }
                low++;
                 k = high-low+1;
                // if(pq.size()>0){
                totalcost=pq.top().first+k*sum;
                // }
            
            }
            ans = max(ans,high-low+1);
            
            high++;
        }
        
        
        
        
        return ans;
        
    }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
vector<int> ans;
        
priority_queue<pair<int,int>,vector<pair<int,int> >> pq;
        
        int low = 0;
        int high = 0;
        int size = v.size();
        
        while(high<size){
            
            pq.push({v[high],high});
            
            if(high-low+1==k){
                ans.push_back(pq.top().first);
                low++;
        while(!pq.empty() && pq.top().second<low){
            pq.pop();
        }
            }
            high++;
        }
        
        
        
        return ans;
        
    }
};
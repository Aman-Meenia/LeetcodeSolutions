class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
vector<int> ans;
        priority_queue<pair<int,int> , vector<pair<int,int> > > pq;
        int n = v.size();
        int low = 0;
        int high = 0;
        
        while(high<n){
            pq.push({v[high],high});
            
            if(high-low+1==k){
                while(pq.top().second<low){
                    pq.pop();
                }
                ans.push_back(pq.top().first);
                low++;
            }
            high++;
            
            
        }
        
        
        return ans;
    }
};
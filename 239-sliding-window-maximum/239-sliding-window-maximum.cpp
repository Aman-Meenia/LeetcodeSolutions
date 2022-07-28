class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        vector<int> ans;
        int low = 0;
        int high = 0;
map<int,int> mp;
        int size = v.size();
        while(high<size){
            mp[v[high]]+=1;
        
            if(high-low+1==k){
                auto it =mp.rbegin()->first;
                ans.push_back(it);
                mp[v[low]]-=1;
                if(mp[v[low]]==0){
                    auto it = mp.find(v[low]);
                    mp.erase(it);
                }
                
                low++;
            }
            high++;
        }
        return ans;
        
    }
};
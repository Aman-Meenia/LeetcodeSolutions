class Solution {
public:
    int totalFruit(vector<int>& v) {
     unordered_map<int,int> mp;
        int ans = 0;
        int low = 0;
        int high = 0;
        int size = v.size();
        
        while(high<size){
            
            mp[v[high]]+=1;
            
            while(mp.size()>2){
                mp[v[low]]-=1;
                    if(mp[v[low]]==0){
                    auto it = mp.find(v[low]);
                mp.erase(it);
                    }
                low++;
            }
            ans = max( ans , high - low + 1 );
            
high++;
        }
        return ans;
    }
};
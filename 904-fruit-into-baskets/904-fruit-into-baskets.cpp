class Solution {
public:
    int totalFruit(vector<int>& v) {
       int low = 0;
        int high = 0;
        int size = v.size();
        int ans = INT_MIN; 
        unordered_map<int,int> mp;
        while(high<size){
            mp[v[high]]+=1;
            while(mp.size()>2 && low<=high){
                mp[v[low]]-=1;

                if(mp[v[low]]==0){
                    auto it = mp.find(v[low]);
           mp.erase(it);
               }
                low++;
            }
            ans= max(ans, high-low+1);
            high++;
        }
        return ans;
    }
};
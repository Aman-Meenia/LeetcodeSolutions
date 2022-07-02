class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> mp;
        int size=wall.size();
        for(int i=0; i<wall.size(); i++){
            int index=0;
for(int j=0; j<wall[i].size()-1; j++){
    index+=wall[i][j];
    mp[index]+=1;
}
            }
        
        int ans=0;
        for(auto a:mp){
            ans=max(ans,a.second);
        }
        return size-ans;
            }
};
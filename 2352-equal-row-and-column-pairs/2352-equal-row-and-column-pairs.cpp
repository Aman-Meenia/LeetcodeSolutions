class Solution {
public:
    int equalPairs(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++){
            string t;
            for(int j=0; j<m; j++){
                string temp = to_string(v[i][j]);
                t+=temp;
                t.push_back(' ');
            }
            mp[t]+=1;
        }
        int ans=0;
        for(int i=0; i<m; i++){
             string t;
            for(int j=0; j<n; j++){
                string temp = to_string(v[j][i]);
                t+=temp;
                              t.push_back(' ');
            }
            if(mp.find(t)!=mp.end()){
                ans+=mp[t];
            }
        }
        
        
        return ans;
    }
};
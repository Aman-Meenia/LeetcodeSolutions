class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string , vector<string
            > > mp;
        for(auto a:s){
            string t = a;
            sort(t.begin(),t.end());
            mp[t].push_back(a);
        }
        vector<vector<string> > ans;
        
        for(auto a:mp){
            vector<string> temp;
            for(auto it:a.second){
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
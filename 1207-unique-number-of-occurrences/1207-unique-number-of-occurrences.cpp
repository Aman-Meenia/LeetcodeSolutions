class Solution {
public:
    bool uniqueOccurrences(vector<int>& v) {
        unordered_map<int,int> mp;
        unordered_set<int> st;
        for(auto a:v){
            mp[a]+=1;
        }
        
        for(auto a:mp){
            st.insert(a.second);
        }
        if(st.size()==mp.size()) return true;
        return false;
    }
};
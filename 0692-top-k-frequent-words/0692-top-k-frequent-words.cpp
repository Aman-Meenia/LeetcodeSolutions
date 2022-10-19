class Solution {
public:
    
    static int cmp(pair<string,int> &a, pair<string,int> &b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
unordered_map<string,int> mp;
        for(auto a:words){
            mp[a]+=1;
        }
        vector<pair<string,int> > v;
        
        for(auto a:mp){
            v.push_back({a.first,a.second});
        }
        vector<string> ans;
        sort(v.begin(),v.end(),cmp); 
        for(int i=0; i<k ;i++){
            ans.push_back(v[i].first);
        }
        return ans;
        
    }
};
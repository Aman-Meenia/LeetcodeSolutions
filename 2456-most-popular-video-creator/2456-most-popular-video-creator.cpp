class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
    unordered_map<string,vector<pair<string,int>> > mp;
        vector<vector<string> > ans;
      int n = ids.size();
        for(int i=0; i<n; i++){
            mp[creators[i]].push_back({ids[i],views[i]});
        }
        vector<string> temp;
        int maxsum=INT_MIN;
for(auto it:mp){
    int sum = 0;
    for(auto a:it.second){
  sum+=a.second;
    }
    maxsum=max(sum,maxsum);

}
        for(auto it:mp){
    int sum = 0;
    for(auto a:it.second){
  sum+=a.second;
    }
if(sum==maxsum){
    // cout<<" it .first "<<it.first<<endl;
     temp.push_back(it.first);
}
}
     
        
        sort(temp.begin(),temp.end());
        
        
        for(auto a:temp){
            string tt;
            int maxvalue=INT_MIN;
            for(auto it:mp[a]){
                if(it.second>maxvalue || it.second==maxvalue && tt>it.first){
                    maxvalue=it.second;
                    tt=it.first;
                }
            }
            ans.push_back({a,tt});
        }
        
        
        return ans;
    }
};
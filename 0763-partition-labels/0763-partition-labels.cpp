class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        for(auto a:s){
            mp[a]+=1;
        }
        vector<int> ans;
        unordered_map<char, int> mp1;
        int low = 0;
        int high = 0;
        int cnt = 0;
        int size = s.size();
        while(high<size){
            mp1[s[high]]+=1;
            if(mp1[s[high]]==mp[s[high]]){
cnt++;
            }
            if(mp1.size()==cnt){
               mp1.clear();
                cnt=0;
                ans.push_back(high-low+1);
                low=high+1;
            }
            
         high++;   
            
        }
        
        
        
     return ans;   
    }
};
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        for( auto it :t){
            mp[it]+=1;
        }
        int ans = INT_MAX;
        
        
        int low = 0;
        int high = 0;
        int size = s.size();
        int cnt = 0;
   int start = 0;
        while(high<size){
            
            if(mp.count(s[high])){
                mp[s[high]]--;
                if(mp[s[high]]==0){
                    cnt++;
                }
            }
            
            while(low<=high && !mp.count(s[low]) || low<=high && mp.count(s[low]) &&mp[s[low]]<0){
                if(mp.count(s[low])){
                    mp[s[low]]+=1;
                }
                low++;
            }
            if(cnt==mp.size()){
                if(high-low+1  < ans){
                   start = low ;
                    ans = high-low+1;
                }
               
            }
            high++;
            
            
        }
        if(ans==INT_MAX) return "";
        return s.substr(start,ans);
    }
};
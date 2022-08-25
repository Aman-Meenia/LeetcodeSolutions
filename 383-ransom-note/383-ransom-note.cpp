class Solution {
public:
    bool canConstruct(string s1, string s2) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        for(auto a:s1){
            mp[a]+=1;
        }
        for(auto a:s2){
mp2[a]+=1;
        }
        
        for(auto a:mp){
int t = a.second;
            int c=a.first;
            if(mp2[c]>=t) {
                
            }else{
                return false;
            }
            
            }
        
        return true;
    }
};
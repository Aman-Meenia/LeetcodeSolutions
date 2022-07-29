class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& s, string pattern) {
        vector<string> ans;
        
        for(auto a:s){
            string t = a;
            unordered_map<char,char> mp;
          bool cnd=true;
     
            unordered_set<char> st;
            for(int i=0; i<pattern.size(); i++){
                char aa = t[i];
                char b = pattern[i];
       if(mp.find(b)==mp.end()&&st.find(aa)==st.end()){
                    mp[b]=aa;
                    st.insert(aa);

                }else if(mp.find(b)!=mp.end() && mp[b]==aa){

                    
                }else{
                    cnd=false;
                    break;
                    
                }
               
            }
            if(cnd==true) ans.push_back(a);
            
            
            
            
            
        }
        return ans;
    }
};
class Solution {
public:
    int minDeletions(string s) {
        vector<int> v;
        unordered_map<char,int> mp;
        for(auto a:s){
            mp[a]+=1;
        }
        for(auto a:mp){
v.push_back(a.second);
        }
        int ans=0;
        unordered_set<int> st;
        for(int i=0; i<v.size(); i++){
int a=v[i];
            if(st.find(a)!=st.end()){
                while(a>0){
                    if(st.find(a)!=st.end()){
                        
                    }else{
                    st.insert(a);
                        break;
                    }
                    a--;
                    ans++;
                }
                
                
            }else{
                st.insert(a);
                }
            
            
            }
        
        
        
        
        return ans;
        
        
        
        
    }
};
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        
//          firstly we sort all folders 
        vector<string> ans; 
        sort(folder.begin(),folder.end());
      
        
        
        
        
        unordered_set<string> st;
        
        
        for(auto a: folder){
            string t = a;
            string temp;
            int cnd = true;
            for(int i=0; i<t.size(); i++){
                temp.push_back(t[i]);
            
    if(st.find(temp)!=st.end()&&t[i+1]=='/' ){
                    cnd = false;
                  break;
                }
            }
            if(cnd == false )continue;
    ans.push_back(a);
            st.insert(a);
            
        }
   
        return ans;
        
    }
};
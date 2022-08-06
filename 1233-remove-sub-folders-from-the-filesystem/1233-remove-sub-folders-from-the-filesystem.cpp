class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> ans; 
        sort(folder.begin(),folder.end());
        for(auto a: folder){
            cout<<a<<" ";
        }cout<<endl;
        unordered_set<string> st;
        
        
        for(auto a: folder){
            // cout<<a<<endl;
            string t = a;
            string temp;
            int cnd = true;
            for(int i=0; i<t.size(); i++){
                temp.push_back(t[i]);
                // cout<<" temp "<<temp<<endl;
                if(st.find(temp)!=st.end()&& t[i+1]=='/' ){
                    cnd = false;
                  break;
                }
            }
            if(cnd == false )continue;
            // cout<<" A is "<<a<<endl;
            st.insert(a);
            
        }
        for(auto a: st){
ans.push_back(a);
        }
        return ans;
        
    }
};
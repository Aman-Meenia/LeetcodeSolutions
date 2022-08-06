class Solution {
public:
    string replaceWords(vector<string>& dic, string sent) {
        unordered_set<string> st;
        for(auto a: dic){
            st.insert(a);
        }
        vector<string> s;
        string temp;
        for(auto a:sent){
            if(a==' '){
                s.push_back(temp);
                temp.clear();
            }else{
                temp.push_back(a);
            }
        }
        if(temp.size()>0){
            s.push_back(temp);
        }
        
        string ans;
        
        for(auto a: s){
cout<<a<<" ";
        }cout<<endl;
        
        
        
        
        
        for(auto a:s){

            string t;
            bool cnd = false;
            for(auto it:a){
                t.push_back(it);
                if(st.find(t)!=st.end()){
ans+=t;
                    ans.push_back(' ');
                    cnd= true;
                        break;
                }
            }
            if(cnd==true) continue;
            ans+=a;
            ans.push_back(' ');
            
            
        }
        if(ans.back()==' '){
ans.pop_back();
        }
        return ans;
        
    }
};
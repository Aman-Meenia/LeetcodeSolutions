class Solution {
public:
    unordered_set<string> st;
    vector<string> ans;
    vector<string> temp;
    void  fun(string & s , int index){
        if(index>=s.size()){
          string tt;
            for(auto a : temp){
                tt+=a;
                tt.push_back(' ');
            }
            tt.pop_back();
            ans.push_back(tt);
            return ;
            
        }
        string t ;
        for(int k=index; k<s.size(); k++){
            t.push_back(s[k]);
            if(st.find(t)!=st.end()){
                temp.push_back(t);
                fun(s,k+1);
                temp.pop_back();
            }
        }
        
        
        
        
        
    }
    
    
    vector<string> wordBreak(string s, vector<string>& word) {
        for(auto a:word){
            st.insert(a);
        }
        fun(s,0);
        return ans ;
    }
};
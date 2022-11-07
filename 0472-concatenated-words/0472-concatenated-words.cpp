class Solution {
public:
    
    
    unordered_set<string> st;
    
    
    bool search(string s , int n , int cnt){
        // if(s.size()==0) return true;
        string temp ;
        // cout<<" s "<<s<<endl;
        for(int i=n; i<s.size(); i++){
            temp.push_back(s[i]);
            if(st.find(temp)!=st.end()){
                
                if(i==s.size()-1 && cnt>0) return true;
                if(i==s.size()-1 && cnt==0) return false;
                if(search(s.substr(i+1),0,cnt+1)){
                    return true;
                }
                
                
            }
        }
        return false;
    }
    
    
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> ans;
        for(auto a:words){
st.insert(a);
        }
        for(auto a:words){
            if(search(a,0,0)){
                ans.push_back(a);
            }
        }
        return ans;
        
        
    }
};
class Solution {
public:
    string longestWord(vector<string>& words) {
       
        unordered_set<string> st;
        for(auto a:words){
            st.insert(a);
        }
        int n = words.size();
        int maxsize=0;
        for(int i=0; i<n; i++){
  string t = words[i];
            string temp ;
            int cnd = true;
            for(auto a:t){
                temp.push_back(a);
                if(st.find(temp)==st.end()){
                    cnd=false;
                    break;
                }
            }
            if(cnd==true){
                int tsize=t.size();
                maxsize=max(maxsize,tsize);
            }
            
        }
        if(maxsize==0) return "";
        
        vector<string> ANS;
         for(int i=0; i<n; i++){
  string t = words[i];
             string temp;
             bool cnd =true;
            for(auto a:t){
                
                temp.push_back(a);
                if(st.find(temp)==st.end()){
                    cnd=false;
                    break;
                }
            }
            if(cnd==true &&t.size()==maxsize){
           ANS.push_back(t);
            }
            
        }
        sort(ANS.begin(),ANS.end());
      
return ANS[0];
    
    }
};
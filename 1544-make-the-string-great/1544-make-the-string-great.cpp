class Solution {
public:
    string makeGood(string s) {
      
        while(true){
            bool cnd = false;
            for(int i=0; i<s.size()-1; i++){
                if(s[i]==s[i+1]+32 ||s[i]+32==s[i+1]){
                    s.erase(s.begin()+i);
                    s.erase(s.begin()+i);
                    cnd=true;
                    break;
                }
            }
            if(cnd==false||s.size()==0){
                break;
            }
        }
        return s;
        
        
    }
};
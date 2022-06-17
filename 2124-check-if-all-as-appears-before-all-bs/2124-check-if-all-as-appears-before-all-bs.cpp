class Solution {
public:
    bool checkString(string s) {
        int count=0;
       for(int i=0; i<s.size(); i++){
           if(count==1&&s[i]=='a'){
               return false;
           }
           if(s[i]=='b'){
               count=1;
           }
       } 
        return true;
    }
};
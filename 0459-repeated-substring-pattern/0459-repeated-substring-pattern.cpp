class Solution {
public:
    
    bool repeatedSubstringPattern(string s) {

        int size = s.size();

        int mid = s.size()/2;
if(s.size()%2) mid+=1;
for(int i=mid; i<size; i++){

    string s1 = s.substr(i,size-i);
    string s2 = s.substr(0,s1.size());
   
    int tt = s1.size()*2;


        tt=size-tt;
   
    string k = s.substr(s1.size(),tt);

    if(s1==s2) {
        if(k.size()>0){
        string t;
        while(t.size()<s.size()){
            t+=k;
        }
        if(t==s) return true;
        }else return true;
        
    }
}

    
        return false;
    }
};
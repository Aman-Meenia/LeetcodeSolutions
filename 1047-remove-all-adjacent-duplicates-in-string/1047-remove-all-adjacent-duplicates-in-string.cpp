class Solution {
public:
    string removeDuplicates(string s) {
        int i= 0;
       
        while(s.size()>1 &&i<(s.size())-1){
if(s[i]==s[i+1]){
    s.erase(s.begin()+i);
    s.erase(s.begin()+i);

    while(i>=1){
        if(s[i]==s[i-1]){
            i--;
        }else{
            break;
        }
    }
    
    
}else{
    i++;
}
        }

    
        return s;
    }
};
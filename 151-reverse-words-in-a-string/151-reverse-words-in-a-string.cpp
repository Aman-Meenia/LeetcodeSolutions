class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string t;
        int n =s.size();
     for(int i=n-1; i>=0; i--){
         if(s[i]==' '){
             if(t.size()>0){
             reverse(t.begin(),t.end());
             ans+=t;
             ans.push_back(' ');
             }
             t.clear();
             
         }else{
             t.push_back(s[i]);
         }
     }   
        if(t.size()>0){
             reverse(t.begin(),t.end());
             ans+=t;
        }
        while(ans.back()==' '){
            ans.pop_back();
        }
        return ans;
    }
};
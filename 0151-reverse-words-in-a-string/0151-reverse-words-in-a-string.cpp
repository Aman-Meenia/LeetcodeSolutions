class Solution {
public:
    string reverseWords(string s) {
        int size = s.size();
       int i=size-1;
        string ans;
        string temp;
        while(i>=0){
            
            if(s[i]==' '){
                if(temp.size()>=1){
          reverse(temp.begin(),temp.end());
                    ans+=temp;
                    ans.push_back(' ');
                    temp.clear();
                }
            }else{
                temp.push_back(s[i]);
            }
            i--;
            
        }
        if(temp.size()>0){
             reverse(temp.begin(),temp.end());
                    ans+=temp;
}
        while(ans.size()>0 && ans.back()==' '){
            ans.pop_back();
        }
        return ans;
        
    }
};
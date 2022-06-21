class Solution {
public:
    string maximumBinaryString(string s) {
        int count=0;
      for(auto a:s){
          if(a=='0'){
              count++;
          }
      } int ans=0;
        int p=0;
        while(s[p]=='1'){
            ans++;
            p++;
        }
        if(count>=2){
 count+=ans;
            string ans;
            for(int i=0; i<s.size(); i++){
                if(i==count-1){
                    ans.push_back('0');
                }else{
                    ans.push_back('1');
          
                }
            }
            return ans;
        }
        return s;
    }
};
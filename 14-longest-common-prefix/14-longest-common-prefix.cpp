class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int size=s[0].size();
        string ans;
        for(int i=0; i<size; i++){
            char t = s[0][i];
            bool cnd =true;
            for(int k=0; k<s.size(); k++){
                if(s[k].size()>i && t!=s[k][i] || s[k].size()<=i){
                    cnd=false;
             
                    return ans;
                }
            }
            ans.push_back(t);
   
        }
      return ans;
    }
};
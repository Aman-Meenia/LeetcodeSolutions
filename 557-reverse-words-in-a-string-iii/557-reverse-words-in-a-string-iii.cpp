class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n = s.size();
        string temp;
        for(int i=0; i<n; i++){
            if(s[i]==' '){
                
            }else{
temp.push_back(s[i]);
            }
            if(i==n-1 ||s[i]==' '){
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans.push_back(' ');
                temp.clear();
            }
        }
        ans.pop_back();
        return ans;
    }
};
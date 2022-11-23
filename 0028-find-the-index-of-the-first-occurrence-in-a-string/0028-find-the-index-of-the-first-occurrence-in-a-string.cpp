class Solution {
public:
    int strStr(string s, string t) {
        int n =s.size();
        int m = t.size();
        if(m>n) return -1;
        vector<int> temp;
        
for(int i=0; i<n; i++){
    if(s[i]==t[0]){
        temp.push_back(i);
    }
}
        for(int i=0; i<temp.size(); i++){
            int tt = temp[i];
            if(n-tt+1>=m){
                if(s.substr(tt,m)==t){
                    return tt;
                }
            }
        }
        
        int ans ;
        
        
        return -1;
        
        
        
    }
};
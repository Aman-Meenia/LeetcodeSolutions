class Solution {
public:
    int dp[301];
    unordered_set<string> st;
    bool fun(string &s , int index ){
        if(index>=s.size()){

                return true;

        }
        if(dp[index]!=-1) return dp[index];
        string t;
        int a =false;
        for(int k=index; k<s.size(); k++){
            t.push_back(s[k]);
            if(st.find(t)!=st.end()){
                a= a||fun(s,k+1);
            }
        }
        return dp[index]=a;
        
    }
    
    
    
    bool wordBreak(string s, vector<string>& word) {
        for(auto a:word){
            st.insert(a);
        }memset(dp,-1,sizeof dp);

        
        return fun(s,0);
        
    }
};
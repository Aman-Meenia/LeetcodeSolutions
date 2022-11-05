class Solution {
public:
           unordered_set<string> st;
    
    int dp[301];
bool search(string & s , int i,string temp){
        // cout<<"temp "<<temp<<endl;
    if(i>=s.size()){
        // cout<<"temp "<<temp<<endl;
        if(st.find(temp)!=st.end() ||temp.size()==0) return true;
    return false;
    }
    
    bool ans =false;
    if(dp[i]!=-1) return dp[i];
    for(int k=i; k<s.size(); k++){
        temp.push_back(s[k]);
                 // cout<<"temp "<<temp<<endl;
        if(st.find(temp)!=st.end()){
   bool ans =search(s,k+1,"");
            if(ans==true) return true;
        }
    }
    return dp[i]=ans;
    
}
    
    
    
    bool wordBreak(string s, vector<string>& wordDict) {

        for(auto a:wordDict){
            st.insert(a);
        }
        memset(dp,-1,sizeof dp);
        return search(s,0,"");
        
        
    }
    
};
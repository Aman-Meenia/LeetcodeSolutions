class Solution {
public:
    int ans=0;
// vector<string> ans;
void validstring(vector<string> &s , unordered_map<char,int>& mp,  int n ){
    
if(n>=s.size()){
    return ;
}


    for(int i=n; i<s.size(); i++){
      int   check=1;
string t=s[i];
unordered_set<char>st;
;
for(auto a:t){

    if(mp.find(a)!=mp.end() || st.find(a)!=st.end()){
check=0;


        break;
    }
    st.insert(a);
}

if(check==1&&st.size()==t.size()){

for(auto a:t){
    mp[a]+=1;
}
}
int ttt=mp.size();
ans=max(ans,ttt);
validstring(s,mp,i+1);
        if(check==1){
for(auto a:t){
    mp[a]-=1;
    if(mp[a]==0){
auto it=mp.find(a);
mp.erase(it);  
}

}
        }

    }
}

    int maxLength(vector<string>& s) {
unordered_map<char,int> mp;
        
validstring(s,mp,0);

        return ans;
        
    }
};
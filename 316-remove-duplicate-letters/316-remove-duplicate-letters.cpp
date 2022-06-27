class Solution {
public:
    string removeDuplicateLetters(string s) {
       vector<int> visited(26,-1);
stack<char> st;
vector<int> lastindex(26);
int n=s.size();
for(int i=0; i<n; i++){
    lastindex[s[i]-'a']=i;
}


for(int i=0; i<n; i++){

if(visited[s[i]-'a']==1){
    continue;
}

while(st.size()>0 && st.top()>s[i] && lastindex[st.top()-'a']>i){

    visited[st.top()-'a']=-1;
    st.pop();

}

if(visited[s[i]-'a']==-1){
st.push(s[i]);
 visited[s[i]-'a']=1;
}
}


   





string ans;
while(!st.empty()){
ans.push_back(st.top());
    st.pop();
}


reverse(ans.begin(),ans.end()); 
        return ans;
    }
};
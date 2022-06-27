class Solution {
public:
    string smallestSubsequence(string s) {
      vector<int> visited(26,-1);
        vector<int> lastindex(26);
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            lastindex[s[i]-'a']=i;
        }
        
        for(int i=0; i<s.size(); i++){
            if(visited[s[i]-'a']==1){
                continue;
            }
            while(!st.empty() && st.top()>s[i] &&lastindex[st.top()-'a']>i){
                visited[st.top()-'a']=-1;
                st.pop();
            }
            visited[s[i]-'a']=1;
            st.push(s[i]);
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
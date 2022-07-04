class Solution {
public:
    string removeKdigits(string s, int k) {
        
    stack<char> st;
        int n=s.size();
        
        for(int i=0; i<n; i++){
            while(!st.empty() && st.top()>s[i] &&k>0){
                st.pop();
                k-=1;
            }
            if(!st.empty()||s[i]!='0'){
                st.push(s[i]);
            }
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()==0){
            return "0";
        }
        return ans;
    }
};
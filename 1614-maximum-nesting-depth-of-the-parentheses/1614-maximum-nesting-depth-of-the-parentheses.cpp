class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans=0;
        for(auto a:s){
            if(a=='('){
                st.push('(');
            }else if(a==')'){
          int size=st.size();
                 ans=max(ans,size);
 
                      st.pop();
            }
           
        }
        return ans;
    }
};
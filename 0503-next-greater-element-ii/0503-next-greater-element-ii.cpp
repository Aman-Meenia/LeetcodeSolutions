class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
                int n = v.size();
        stack<int> st;
        for(int i=n-1; i>=0; i--){
            st.push(v[i]);
        }

        vector<int> ans(n,-1);
        
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top()<=v[i])
                st.pop();
            if(st.size()>0){
ans[i]=st.top();
            }
            st.push(v[i]);
        }
        return ans;
        
    }
};
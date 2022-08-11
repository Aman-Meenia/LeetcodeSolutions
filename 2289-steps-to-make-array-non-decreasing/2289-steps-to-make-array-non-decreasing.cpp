class Solution {
public:
    int totalSteps(vector<int>& v) {
        int ans = 0;
        stack<pair<int,int> > st;
        int n = v.size();

        for(int i=n-1; i>=0; i--){
              int cnt=0;
            if(st.empty()){
                
            }else{

                while(!st.empty() && st.top().first<v[i]){
cnt=max(cnt+1,st.top().second);
                    st.pop();
                }
                ans=max(ans,cnt);
            }
            st.push({v[i],cnt});
        }
        return ans;
    }
};
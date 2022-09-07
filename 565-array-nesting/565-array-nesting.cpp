class Solution {
public:
    int arrayNesting(vector<int>& v) {
        int n = v.size();
        unordered_set<int> st;
        int ans = 0;
        // unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            int cnt = 1;
int temp = v[i];
            st.insert(i);
            while(st.find(temp)==st.end()){
                // cout<<temp<<"  ";
                cnt++;
                st.insert(temp);
                temp = v[temp];
            }
            // cout<<endl;
            ans = max(ans,cnt);
        }
        return ans;
    }
};
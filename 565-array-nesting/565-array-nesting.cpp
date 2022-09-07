class Solution {
public:
    int arrayNesting(vector<int>& v) {
        int n = v.size();
      vector<int> st(n,0);
        int ans = 0;

        for(int i=0; i<n; i++){
            int cnt = 1;
int temp = v[i];
            st[i]=1;
            while(st[temp]!=1){
                cnt++;
                st[temp]=1;
                temp = v[temp];
            }

            ans = max(ans,cnt);
        }
        return ans;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n = v.size();
        int ans = 0;
        int minimum = v[0];
        for(int i=1; i<n; i++){
            ans = max(ans,v[i]-minimum);
            minimum = min(minimum,v[i]);
        }
        return ans;
    }
};
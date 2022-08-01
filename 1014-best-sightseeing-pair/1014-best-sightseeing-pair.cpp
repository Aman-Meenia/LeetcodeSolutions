class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int n = v.size();
        int ans=INT_MIN;
        int temp = v[0];
        for(int i=1; i<n; i++){
         ans=max(ans,temp+v[i]-i);
            temp=max(temp,v[i]+i);
        }
        return ans;
    }
};
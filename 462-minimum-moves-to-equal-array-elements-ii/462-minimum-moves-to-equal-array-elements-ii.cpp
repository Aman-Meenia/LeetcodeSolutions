class Solution {
public:
    int minMoves2(vector<int>& v) {
       sort(v.begin(),v.end());
        int n=v.size();
        int mid=n/2;
        int ans=0;
        for(int  i=0; i<n; i++){
            ans+=abs(v[i]-v[mid]);
}
        return ans;
    }
};
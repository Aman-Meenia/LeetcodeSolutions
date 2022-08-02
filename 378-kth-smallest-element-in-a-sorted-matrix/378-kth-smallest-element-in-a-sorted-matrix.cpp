class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v ;
        for(auto a:matrix){
for(auto b:a){
    v.push_back(b);
}
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
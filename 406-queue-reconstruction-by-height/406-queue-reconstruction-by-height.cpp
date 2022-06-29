class Solution {
public:
    static bool cmp(vector<int>& a, vector<int> & b)
    {
        if(a[0] == b[0])
            return a[1] < b[1];
        
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& v) {
        vector<vector<int> > ans;
        sort(v.begin(),v.end(),cmp);
        for(auto a:v){
        ans.insert(ans.begin()+a[1],a);
        }
        return ans;
    }
};
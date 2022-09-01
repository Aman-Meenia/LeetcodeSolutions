class Solution {
public:
        static int cmp(vector<int>& a, vector<int>& b){
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
int  longestIncreasingSubsequence(vector<int> & v){
    vector<int> temp;
    int n = v.size();
    for(int i=0; i<n; i++){
        if(temp.size()==0 ||temp.back()<v[i]){
            temp.push_back(v[i]);
        }else{
            int it = lower_bound(temp.begin(),temp.end(),v[i])-temp.begin();
            temp[it]=v[i];
        }
    }
    return temp.size();
}
    int maxEnvelopes(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),cmp);
        vector<int> t;
        for(auto a:v){
            t.push_back(a[1]);
        }
        
        return longestIncreasingSubsequence(t);
        
        
    }
};
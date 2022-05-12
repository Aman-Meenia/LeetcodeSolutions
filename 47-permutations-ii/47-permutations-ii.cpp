class Solution {
public:
    vector<vector<int> > ans;
vector<int> temp;

void fun(vector<int> &v, int i){
if(i==v.size()) {
    ans.push_back(v);
    return ;
}
unordered_set<int> s;
for(int k=i; k<v.size(); k++){
    if(s.find(v[k])!=s.end()){
        continue;
    }
    s.insert(v[k]);
    swap(v[i],v[k]);
    fun(v,i+1);
    swap(v[i],v[k]);
}


}

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        fun(nums,0);
       return ans; 
    }
};
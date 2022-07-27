class Solution {
public:
    vector<vector<int> > ans;
    void fun(vector<int> & v, int index){
if(index==v.size()){
    ans.push_back(v);
    return ;
}
        for(int i=index; i<v.size(); i++){
        swap(v[i],v[index]);
            fun(v,index+1);
                 swap(v[i],v[index]);
            }
    
    
    }
    vector<vector<int>> permute(vector<int>& v) {
        fun(v,0);
       return ans; 
    }
};
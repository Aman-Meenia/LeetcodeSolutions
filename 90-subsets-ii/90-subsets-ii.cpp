class Solution {
public:
    
    vector<vector<int> > ans;
 void fun(vector<int> & v, int index, vector<int> &t){
        
            ans.push_back(t);
       
for(int i=index; i<v.size(); i++){
    if(i>index && v[i]==v[i-1]) continue;
    t.push_back(v[i]);
    fun(v,i+1,t);
    t.pop_back();
}

            
        
              
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        vector<int> t;
        fun(v,0,t);
        return ans;
    }
};
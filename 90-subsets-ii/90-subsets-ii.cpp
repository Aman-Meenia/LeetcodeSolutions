class Solution {
public:
    
    vector<vector<int> > ans;
    void fun(vector<int> & v, int i, vector<int> &t,bool vis){
        if(i==v.size()) {
            ans.push_back(t);
            return;
        }
                  fun(v,i+1,t,false);
            if(i>0&& v[i]==v[i-1] && vis==false){
return;
            }
        t.push_back(v[i]);
        fun(v,i+1,t,true);
        t.pop_back();

            
        
              
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        vector<int> t;
        fun(v,0,t,0);
        return ans;
    }
};
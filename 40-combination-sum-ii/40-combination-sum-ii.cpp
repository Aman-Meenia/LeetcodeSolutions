class Solution {
public:
       vector<vector<int> > ans;
 void fun(vector<int> & v, int index, vector<int> &t,int target){
        if(target==0){
            ans.push_back(t);
        }
for(int i=index; i<v.size(); i++){
    if(i>index && v[i]==v[i-1]) continue;
    if(v[i]<=target){
        target-=v[i];
    t.push_back(v[i]);
    fun(v,i+1,t,target);
        target+=v[i];
    t.pop_back();
    }
}

            
        
              
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int target) {
        sort(v.begin(),v.end());
        vector<int> t;
        fun(v,0,t,target);
        return ans;
    }
};
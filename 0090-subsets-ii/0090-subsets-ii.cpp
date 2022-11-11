class Solution {
public:
    vector<vector<int>> ans;
    
    void fun(vector<int> & v , int i ,vector<int> temp ,  bool pre){
        
        if(i>=v.size()){
            ans.push_back(temp);
            return ;
        }
       // if(i>=1){
       //      if(v[i]==v[i-1] && pre==false)
        fun(v,i+1,temp,false);
        // }
               if(i>=1){
            if(v[i]==v[i-1] && pre==false){
        
            }else{
               temp.push_back(v[i]);
        fun(v,i+1,temp,true);
        temp.pop_back();  
            }
               }else{
        temp.push_back(v[i]);
        fun(v,i+1,temp,true);
        temp.pop_back();
               }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        sort(v.begin(),v.end());
        bool pre=false;
        vector<int> temp;
        fun(v,0,temp,pre);
        return ans;
    }
};
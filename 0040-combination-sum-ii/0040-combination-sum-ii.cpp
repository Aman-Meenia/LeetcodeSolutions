class Solution {
public:
    
    vector<vector<int>> ans;
    void fun(vector<int> & v , int target , int i , vector<int> & temp, bool pre){
        
        if(i<0||target==0){ 
            if(target==0){
                ans.push_back(temp);
            }
            return ;
        }
        
if(v[i]<=target){
    if(i<v.size()-1){
     if(v[i]==v[i+1] && pre==false){
         
     }else{
             temp.push_back(v[i]);
    fun(v,target-v[i],i-1,temp,true);
    temp.pop_back();
     }
    }else{
    temp.push_back(v[i]);
    fun(v,target-v[i],i-1,temp,true);
    temp.pop_back();
    }
    fun(v,target,i-1,temp,false);
}else{
    fun(v,target,i-1,temp,false);
}
        
        
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& v, int target) {
        sort(v.begin(),v.end());
        vector<int> temp;
        int n = v.size();
        fun(v,target,n-1,temp,false);
        return ans;
        
    }
};
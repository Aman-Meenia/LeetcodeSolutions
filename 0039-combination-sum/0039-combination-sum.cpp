class Solution {
public:
    
    vector<vector<int> > ans;
    void fun(vector<int> & v ,int i, int target, vector<int> & temp){
        if(i<0||target==0){
            if(target==0){ 
            ans.push_back(temp);
            }
            return ;
        }
        if(v[i]<=target){
            temp.push_back(v[i]);
           fun(v,i,target-v[i],temp);
            temp.pop_back();
            fun(v,i-1,target,temp);
        }else{
            fun(v,i-1,target,temp);
        }
       
        
        
        
        
        
    }
    
    
    
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& v, int target) {
        sort(v.begin(),v.end());
        int n = v.size();
        vector<int> temp;
        fun(v,n-1,target,temp);
        return ans;
    }
};
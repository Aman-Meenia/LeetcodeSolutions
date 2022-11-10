class Solution {
public:
    
    
    
    
    vector<vector<int> > ans ;

    void fun(vector<int> & v , int i){
        if(i>=v.size()){
            ans.push_back(v);
            return;
        }
        
        for(int k=i; k<v.size(); k++){
            swap(v[i],v[k]);
            fun(v,i+1);
            swap(v[i],v[k]);
        }
        
        
    }
    
    
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        fun(nums,0);
        return ans;
     
    }
};
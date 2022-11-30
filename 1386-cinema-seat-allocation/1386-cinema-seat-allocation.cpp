class Solution {
public:
        unordered_map<int,set<int> > mp;
    
    bool fun(int start ,int end, int k){
        
        
        for(int i=start; i<=end; i++){
            if(mp[k].count(i)){
                return false;
            }
        }
        return true;
    }
    
    
    
    
    int maxNumberOfFamilies(int n, vector<vector<int>>& v) {
        
    
        for(auto it:v){
            int a = it[0];
            int b = it[1];
            mp[a].insert(b);
        }
        int ans =0;
        int size =mp.size();
        ans = (n-size)*2;
        
        for(auto it :mp){
          if(fun(2,9,it.first)){
              ans+=2;
          }  else if(fun(4,7,it.first)){
              ans+=1;
          }else if(fun(2,5,it.first)){
              ans+=1;
          }else if(fun(6,9,it.first)){
              ans+=1;
          }
            
            
        }
        
        return ans;
        
        
    }
};
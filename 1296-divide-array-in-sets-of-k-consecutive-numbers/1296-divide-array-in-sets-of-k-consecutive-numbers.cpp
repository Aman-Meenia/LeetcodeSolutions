class Solution {
public:
    bool isPossibleDivide(vector<int>& v, int k) {
    
        unordered_map<int,int> m;
        for(auto a:v){
            m[a]+=1;
        }
        int n=v.size();
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            
            int p=v[i];
            if(m.find(p)!=m.end()){
           for(int j=p; j<k+p; j++){

               if(m.find(j)==m.end()){
                   return false;
               }
               m[j]-=1;
               if(m[j]==0){
                   auto it=m.find(j);
                   m.erase(it);
               }
            
           }
            }
        }
        
        
        return true;
    }
};
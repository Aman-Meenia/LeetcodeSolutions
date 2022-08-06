class Solution {
public:
    
    
    int fun(vector<vector<int> > & v, int a , int b){

        int n = v.size();
        int m = v[0].size();
             if(a==n) return b;

      if(a>=0 && b>=0 && a<n && b<m){
      int x = a;
        int y = b+1;    
if(x>=0 && y>=0 && x<n && y<m){
    if(v[a][b]==1 && v[x][y]==1){
      return  fun(v,a+1,b+1);
    }
}
     x = a;
       y = b-1;    
if(x>=0 && y>=0 && x<n && y<m){
    if(v[a][b]==-1 && v[x][y]==-1){
       return fun(v,a+1,b-1);
    }
}
          
          
          

        
        
        
        
        
   
    
      }
        
              return -1;
    }
    
    
    
    
    
    
    
    vector<int> findBall(vector<vector<int>>& v) {
        
        
    int n = v.size();
        int m = v[0].size();
        vector<int> ans(m);
        for(int i=0; i<m; i++){
            ans[i]=fun(v,0,i);
        }
        return ans;
    }
};
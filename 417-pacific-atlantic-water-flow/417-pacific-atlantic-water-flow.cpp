class Solution {
public:
    
    
    void fun(vector<vector<int> > & v, int a , int b ,vector<vector<bool> > &visited){
          int n = v.size();
        int m = v[0].size();
    visited[a][b]=true;
  int array1[4]={1,-1,0,0};
        int array2[4]={0,0,-1,1};


        for(int k=0; k<4; k++){

       int x = a + array1[k];
       int y = b + array2[k];
   if(x>=0 && y>=0 && x<n && y<m && visited[x][y]==false && v[x][y]>=v[a][b]){
 
fun(v,x,y,visited);
       }
       

        }
        


}

    
    
    
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& v) {
        vector<vector<int> > ans;
        int n = v.size();
        int m = v[0].size();
        vector<vector<bool> > pacific(n,vector<bool>(m,false));
           vector<vector<bool> > atlantic(n,vector<bool>(m,false));
        
        // fun(v,1,m-1,atlantic);
        for(int i=0; i<n; i++){
            fun(v,i,m-1,atlantic);
        }
        for( int j=0; j<m; j++){
            fun(v,n-1,j,atlantic);
        }
        
            for(int i=0; i<n; i++){
            fun(v,i,0,pacific);
        }
        for(int j=0; j<m; j++){
            fun(v,0,j,pacific);
        }
        
       
        
        
      for(int i=0; i<n; i++){
          
          for(int j=0; j<m; j++){
              
              if(pacific[i][j]==true && atlantic[i][j]==true){
                  ans.push_back({i,j});
              }
          }
      }  
        
     return ans;   
        
    }
};
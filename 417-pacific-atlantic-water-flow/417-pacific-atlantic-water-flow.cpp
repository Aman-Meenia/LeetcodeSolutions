class Solution {
public:
    
    
    void fun(vector<vector<int> > & v, vector<vector<int> > & visited , int a , int b){
        int n = v.size();
        int m = v[0].size();
        visited[a][b]=1;
        int array1[4]={0,0,1,-1};
        int array2[4]={1,-1,0,0};
        for(int k=0; k<4; k++){
            
            
            int x=a+array1[k];
            int y=b+array2[k];
            
            if(x>=0 && y>=0 && x<n && y<m && v[x][y]>=v[a][b] &&visited[x][y]==0){
                fun(v,visited,x,y);
            }
        }
        
        
        
        
    }
    
    
    
    
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& v) {
        
       int n = v.size();
        int m= v[0].size();
        
    vector<vector<int> > pacific(n,vector<int>(m,0));
     vector<vector<int> > atlantic(n,vector<int>(m,0));
        
        
//          WE DO THIS QUESTION IN REVERSE ORDER AND CHECK FROM THE LAST ROW, START ROW , LAST COLUMN AND START COULMN UPTO WHICH POINT WE REACH THROUGH THESE POINT 
//          CHECK FOR START ROW (PACIFIC OCEAN)
        for(int i=0; i<m; i++){
            fun(v,pacific,0,i);
        }
 //          CHECK FOR LEFT CLOUMN (PACIFIC OCEAN)
        for(int i=0; i<n; i++){
            fun(v,pacific,i,0);
        }
        
  //          CHECK FOR START COULMN (ATLANTIC  OCEAN)
        for(int i=0; i<m; i++){
            fun(v,atlantic,n-1,i);
        }
 //          CHECK FOR LEFT CLOUMN (ATLANTIC OCEAN)
        for(int i=0; i<n; i++){
            fun(v,atlantic,i,m-1);
        }
        vector<vector<int> > ans;
        
        for(int i=0; i<n; i++){
for(int j=0; j<m; j++){
    if(pacific[i][j]==1 && atlantic[i][j]==1){
ans.push_back({i,j});
    }
}
        }
        return ans;
    }
};
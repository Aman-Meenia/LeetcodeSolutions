class Solution {
public:
    
    void dfs(vector<vector<int> > & v, vector<vector<int>>& vis , int a , int b){
        vis[a][b]=1;
             
        int n = v.size();
        int m = v[0].size();
        int array1[4]={0,0,-1,1};
        int array2[4]={1,-1,0,0};
        
        for(int k=0; k<4; k++){
            int x = a + array1[k];
            int y = b + array2[k];
            if(x>=0 && y>=0 && x<n && y<m&&v[x][y]==1 &&vis[x][y]==0){
              dfs(v,vis,x,y);  
            }
            
        }
        
        
    }
    
    int numEnclaves(vector<vector<int>>& v) {
        
        int n = v.size();
        int m = v[0].size();
        
        // vector<vector<int>> vis(n,vector<int>vis(m,0));
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        for(int i=0; i<n; i++){
            if(v[i][0]==1&& vis[i][0]==0) dfs(v,vis,i,0);
         
        }
        for(int i=0; i<n; i++){
   if(v[i][m-1]==1 && vis[i][m-1]==0) dfs(v,vis,i,m-1);
        } 
        for(int i=0; i<m; i++){
            if(v[0][i]==1 && vis[0][i]==0) dfs(v,vis,0,i);
        }
        for(int i=0; i<m; i++){
              if(v[n-1][i]==1 && vis[n-1][i]==0) dfs(v,vis,n-1,i);
        }
        int cnt = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j]==0 && v[i][j]==1) cnt++;
            }
        }
        return cnt;
    }
};
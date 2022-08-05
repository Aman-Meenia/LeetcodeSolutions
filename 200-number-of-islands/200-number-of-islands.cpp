class Solution {
public:
    
    void fun(vector<vector<char> > & v, int a , int b , vector<vector<bool> > & vis){
        int n = v.size();
        int m =v[0].size();
        
        vis[a][b]=true;
        int array1[4]={0,0,1,-1};
        int array2[4]={1,-1,0,0};
        
        
        for(int k=0; k<4; k++){
            int x = a + array1[k];
            int y = b + array2[k];
            if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==false && v[x][y]=='1'){
                fun(v,x,y,vis);
            }
        }
        
        
        
    }
    
    
    
    
    
    int numIslands(vector<vector<char>>& v) {
        int n = v.size();
        int m =v[0].size();
        
        vector<vector<bool> > vis(n,vector<bool>(m,false));
        int ans =0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
            if(vis[i][j]==false && v[i][j]=='1'){
                ans++;
                fun(v,i,j,vis);
            }
            }
        }
        
        
        
        
        
        return ans;
        
    }
};
class Solution {
public:
    
    
    
    bool fun(vector<vector<int> > & v1 , vector<vector<int> > & v2, vector<vector<bool> > & vis , int  a, int b){
     
        int n = v1.size();
        int m = v1[0].size();
        int array1[4]={0,0,-1,1};
        int array2[4]={1,-1,0,0};
        // vector<vector<int> > & 
        int cnd =false;
        queue<pair<int,int> > q;
        q.push({a,b});
          if(v1[a][b]==0){
                            cnd = true;
                        }
        vis[a][b]=true;
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int a1 = q.front().first;
                int b1 = q.front().second;
                q.pop();
                
                for(int k =0; k<4; k++){
                    int x = a1 + array1[k];
                    int y = b1 + array2[k];
                    if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==false && v2[x][y]==1 ){
                              vis[x][y]=true;
                              q.push({x,y});
                        if(v1[x][y]==0){
                    
                            cnd = true;
                        }
                    
                    }
                }
            }
        }
        
        
        
        
        
        if(cnd==true) return false;
        return true;
    }
    
    
    
    
    
    
    
    
    
    int countSubIslands(vector<vector<int>>& v1, vector<vector<int>>& v2) {
        int n = v1.size();
        int m =v1[0].size();
        
        vector<vector<bool> > vis(n,vector<bool>(m,false));
        
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
         if(vis[i][j]==false && v2[i][j]==1){
             if(fun(v1,v2,vis,i,j)){
                 
                 ans++;
             }
             
         }
            
            }
        }
        
        
        return ans;
    }
};
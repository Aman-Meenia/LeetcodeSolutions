class Solution {
public:
    int ans = 0;
    void fun(vector<vector<int>> & v,vector<vector<bool> > & vis, int a ,int b ){
                int n = v.size();
        int m = v[0].size();
        
int array1[4]={0,0,-1,1};
        int array2[4]={-1,1,0,0};
        
        
        queue<pair<int,int> > q;
        q.push({a,b});
        int cnt = 1;
        vis[a][b]=true;
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                
                int a1 = q.front().first;
                int b1 = q.front().second;
                q.pop();
                for(int k=0; k<4; k++){
                    
                    int x = a1 + array1[k];
                    int y = b1 + array2[k];
                    
if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==false && v[x][y]==1){
    vis[x][y]=true;
    q.push({x,y});
    cnt++;
    
    
}
                    
                }
                
                
            }
            
            
            
        }
        
        ans=max(ans,cnt);
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]==1 && vis[i][j]==false){
                    fun(v,vis,i,j);
                }
            }
        }
        return ans;
    }
};
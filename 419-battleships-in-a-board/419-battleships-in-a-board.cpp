class Solution {
public:
    void dfs(vector<vector<char> > & v,vector<vector<int> > & vis, int a, int b ){
        int n = v.size();
        int m = v[0].size();
        vis[a][b]=1;
        int array1[4]={0,0,-1,1};
        int array2[4]={1,-1,0,0};
        
        
        for(int k=0; k<4; k++){
            int x = a +array1[k];
            int y = b+array2[k];
            if(x>=0 && y>=0 && x<n && y<m && v[x][y]=='X' && vis[x][y]==0){
                dfs(v,vis,x,y);
            }
        }
    }
    int countBattleships(vector<vector<char>>& v) {
        int cnt = 0;
        int n = v.size();
        int m = v[0].size();
        vector<vector<int> > vis(n,vector<int>(m,0));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
if(v[i][j]=='X' && vis[i][j]==0){
cnt++;
dfs(v,vis,i,j);
}
            }

        }
                    return cnt;
    }
};
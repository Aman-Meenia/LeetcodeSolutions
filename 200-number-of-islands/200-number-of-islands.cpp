class Solution {
public:
    
    void fun(vector<vector<char> > & v, vector<vector<int> > & vis , int a ,int b){
        int n = v.size();
        int m = v[0].size();
        queue<pair<int,int> > q;
        q.push({a,b});
        vis[a][b]=1;
int array1[4]={0,0,-1,1};
int array2[4]={-1,1,0,0};
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int a1 = q.front().first;
                int a2 = q.front().second;
                q.pop();
                for(int k=0; k<4; k++){
                int x=a1+array1[k];
                    int y = a2+array2[k];
                         
                    if(x>=0 && y>=0 && x<n && y<m &&v[x][y]=='1' && vis[x][y]==0){
                        q.push({x,y});
                        vis[x][y]=1;
                    }
                }
            }
        }
            
            // cout<<" NEXT CALL "<<endl;
        
    }
    
    
    int numIslands(vector<vector<char>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int> > vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0; i<n; i++){
for(int j=0; j<m; j++){
    if(vis[i][j]==0 && v[i][j]=='1'){
        fun(v,vis,i,j);
     cnt++;   
    }
}
        }
        
return cnt ;
    }
};
class Solution {
public:
    void fun(vector<vector<char> > & v ,vector<vector<bool> > & vis , int a ,int b){
        int n =v.size();
        int m = v[0].size();
        bool cnd = true;
        queue<pair<int,int>> q;
        int array1[4]={1,-1,0,0};
        int array2[4]={0,0,-1,1};
        vector<pair<int,int> > temp;
         temp.push_back({a,b});
         vis[a][b]=true;
        q.push({a,b});
while(!q.empty()){
    int size = q.size();
    for(int i=0; i<size; i++){
        int a1 = q.front().first;
        int b1 = q.front().second;
        q.pop();
        for(int k=0; k<4; k++){
            int x = a1 + array1[k];
            int y = b1 + array2[k];
                 
            if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==false &&v[x][y]=='O'){
                        vis[x][y]=true;
                       temp.push_back({x,y});
   
                q.push({x,y});
                
                if(x==0 || y==0 || x==n-1 || y==m-1){
                    cnd=false;
                }
            }
        }
    }
}
        
        
    if(cnd==true){
        for(auto a:temp){
           v[a.first][a.second]='X'; 
        }
    }    
        
    }
    
    
    
    void solve(vector<vector<char>>& v) {
        int n =v.size();
        int m = v[0].size();
        vector<vector<bool> > vis(n,vector<bool> (m,false));
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]=='O' && vis[i][j]==false && i!=0 && j!=0 && i!=n-1 && j!=m-1){
 fun(v,vis,i,j);
                }
            }
        }
        // return v;
        
        
    }
};
class Solution {
public:
    
    
    
int fun(vector<vector<int> > & v, vector<vector<bool> > & vis , vector<vector<int> > & temp){
    
            int n = v.size();
        int m =v[0].size();
            int array1[4]={0,0,1,-1};
    
        int array2[4]={1,-1,0,0};
        queue<pair<int,int> > q;
    for(int i=0; i<temp.size(); i++){
        q.push({temp[i][0],temp[i][1]});
    }
    int ans = 0;

    while(!q.empty()){
        ans++;
int size = q.size();
        for(int i=0; i<size; i++){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(int k=0; k<4; k++){
                
                int x = a+array1[k];
                int y = b+array2[k];
                
                
                if(x>=0 && y>=0 && x<n && y<m&& vis[x][y]==false ){
                    if(v[x][y]==0){
                        vis[x][y]=true;
                        q.push({x,y});
                        
                    }else{
                        cout<<ans<<endl;
                        return ans;
                    }
                }
            }
            
            
        }
        
        
    }
    
    return -1;
    
    
}
    
    
    
    
    
    
    
    
    int shortestBridge(vector<vector<int>>& v) {
        int n = v.size();
        int m =v[0].size();
        int array1[4]={0,0,1,-1};
        int array2[4]={1,-1,0,0};
        vector<vector<bool> > vis(n,vector<bool>(m,false));
        vector<vector<int> > temp;
        for(int i=0; i<n; i++){
            bool cnd = false;
            for(int j=0; j<m; j++){
                
              if(v[i][j]==1){
 cnd = true;
//                   push all connected elemnet in vector
                  
                  queue<pair<int,int> > q;
              q.push({i,j});
                  
                  vis[i][j]=true;
                  while(!q.empty()){
                      int size = q.size();
                      for(int p=0; p<size; p++){
                          int a = q.front().first;
                          int b = q.front().second;
                          
                          q.pop();
temp.push_back({a,b});
                          for(int k=0; k<4; k++){
int x = a + array1[k];
                              int y = b + array2[k];
                              if(x>=0 && y>=0 && x<n &&y<n &&vis[x][y]==false && v[x][y]==1){
                                  vis[x][y]=true;
                                 q.push({x,y});
                              }
                          }
                          
                          
                      }
                  }
                  
                  
                  
                  
                  
                 break; 
                  
                  
              } 
                
                
            }
            if(cnd==true) {
                cout<<"i, j "<<endl;
                break;
            }
        }
        
        for(auto a:temp){
            for(auto b:a){
                cout<<b<<" ";
            }cout<<endl;
        }
        int ans = 1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    return fun(v,vis,temp)-1;
    }
};
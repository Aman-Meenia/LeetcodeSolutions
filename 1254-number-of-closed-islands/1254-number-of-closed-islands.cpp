class Solution {
public:
    
    
    void fun2(vector<vector<int> > & v, int a , int b ){
        int n = v.size();
        int m = v[0].size();
        
        int array1[4]={1,-1,0,0};
        int array2[4]={0,0,-1,1};
        
        queue<pair<int,int> > q;
        q.push({a,b});
        v[a][b]=1;
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int a1 = q.front().first;
                int b1 = q.front().second;
                q.pop();
                
                for(int k=0; k<4; k++){
                    int x = a1 + array1[k];
                    int y = b1 + array2[k];
                    if(x>=0 && y>=0 && x<n && y<m && v[x][y]==0){
            v[x][y]=1;
                        q.push({x,y});
                    }
                }
                
                
            }
            
            
            
            
        }
        
        
        
        
        
        
    }
    
    
    
    
    
    void fun(vector<vector<int> > & v, int a ,int b){
           
        int n = v.size();
        int m = v[0].size();
        
        int array1[4]={1,-1,0,0};
        int array2[4]={0,0,-1,1};
        
        queue<pair<int,int> >q;
        q.push({a,b});
        v[a][b]=2;
        
while(!q.empty()){
    int size = q.size();
    for(int i=0; i<size; i++){
        
        int  a1 = q.front().first;
        int b1 = q.front().second;
        q.pop();
        for(int k=0; k<4; k++){
            int x = a1 + array1[k];
            int y = b1 + array2[k];
            if(x>=0 && y>=0 && x<n && y<m &&v[x][y]==0){
                q.push({x,y});
                v[x][y]=2;
            }
        
        }
    }
    
    
}
        
        
    }
    int closedIsland(vector<vector<int>>& v) {
        
        int n = v.size();
        int m = v[0].size();
        
        for(int i=0; i<n; i++){
           if(v[i][0]==0){
               fun(v,i,0);   
           }
            if(v[i][m-1]==0){
                           fun(v,i,m-1);   
            }
        }
        for(int j=0; j<m; j++){
            if(v[0][j]==0){
                  fun(v,0,j);   
            }
            if(v[n-1][j]==0){
                  fun(v,n-1,j); 
            }
        }
  
        
        
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
        if(v[i][j]==0){
            ans++;
            fun2(v,i,j);
        }
                
                }
        }
        
        return ans;
        
        
    }
};
class Solution {
public:
    
    
// void fun(vector<vector<int> > & v , int i , int j ){
//        int n = v.size();
//         int m = v[0].size();
    
//     int array1[4]={0,0,-1,1};
//     int array2[4]={1,-1,0,0};
    
    
//     for(int i=0; i<4; i++){
        
        
        
//     }
    
    
    
    
    
// }

    
    
    int minimumObstacles(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
vector<vector<int> > dp(n,vector<int> (m,INT_MAX));
        
        queue<pair<int,int> > q;
        q.push({0,0});
        if(v[0][0]==1){
            dp[0][0]=1;
        }else{
            dp[0][0]=0;
        }
        
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                int sum = dp[a][b];
                  
    int array1[4]={0,0,-1,1};
    int array2[4]={1,-1,0,0};
    
                for(int k=0; k<4; k++){
                    int x = a +array1[k];
                    int y = b + array2[k];
                    if(x>=0 && y>=0 && x<n && y<m){
                        
                        int add = v[x][y];
                        if(sum+add<dp[x][y]){
                            dp[x][y]=sum+add;
                            q.push({x,y});
                        }
                    }
                    
                    
                }
                
                
                
                
                
            }
            
            
        }
        return dp[n-1][m-1];
        
        
        
        
        
    }
};
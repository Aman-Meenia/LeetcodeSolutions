class Solution {
public:

    int maxDistance(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        int ans = -1;
        // vector<vector<int> > vis(n,vector<int>(m,0));
        queue<pair<int,int> > q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]==1){
q.push({i,j});
                }
            }
            
        }

        
            vector<vector<int> > dp(n,vector<int>(m,INT_MAX));
         
        int array1[4]={1,-1,0,0};
        int array2[4]={0,0,1,-1};
        int distance = 0;
        while(!q.empty()){
            distance++;
            int size = q.size();
            for(int i=0; i<size; i++){
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                for(int k=0; k<4; k++){
                    int x = a+array1[k];
                    int y = b+array2[k];
                    if(x>=0 && y>=0 && x<n && y<n && distance<dp[x][y] && v[x][y]==0 ){
                        q.push({x,y});
                        dp[x][y]=distance;
                    }
                }
            }
            
            
        }
            for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]==0 ){
                   ans = max(ans,dp[i][j]);
                }
            }
            
        }
        if(ans==INT_MAX) return -1;
        return ans;
        
      
        
        
        
        
    }
};
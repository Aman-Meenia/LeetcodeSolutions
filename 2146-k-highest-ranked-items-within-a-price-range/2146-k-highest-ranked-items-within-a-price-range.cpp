class Solution {
public:
    
    
//     stattic int cmp(vector<int> &a , vector<int> &b){
        
//     }
    
    vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int> > dp(n,vector<int>(m,0));
     int array1[4]={0,0,1,-1};
     int array2[4]={1,-1,0,0};
        
        vector<vector<int> > v;
        int distance=0;
queue<pair<int,int> > q;
        q.push(make_pair(start[0],start[1]));
        int xx=start[0];
        int yy =start[1];
               if(xx>=0 && yy>=0 && xx<n && yy<m &&  dp[xx][yy]==0 &&grid[xx][yy]>=pricing[0] &&grid[xx][yy]<=pricing[1]){
                   v.push_back({0,grid[xx][yy],xx,yy});
               }
        dp[start[0]][start[1]]=1;
        
        while(!q.empty()){
            distance+=1;
            // if(v.size()>=k){
            //     break;
            // }
            
            int size=q.size();
            for(int i=0; i<size; i++){
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                
                for(int j=0; j<4; j++){
                    int x=a+array1[j];
                    int y=b+array2[j];
                    // cout<<x<<" y "<<y<<endl;
                    // if(x==2 && y==1 || x==2 && y==0){
                    //  cout<<" grid "<<grid[x][y]<<endl;
                    //    cout<<"dp "<< dp[x][y]<<endl;
                    // }
                    if(x>=0 && y>=0 && x<n && y<m &&  dp[x][y]==0 &&grid[x][y]>=pricing[0] &&grid[x][y]<=pricing[1]){
                        // cout<<"aman "<<endl;
                        q.push(make_pair(x,y));
                        dp[x][y]=1;
              v.push_back({distance,grid[x][y],x,y});
                    }else if(x>=0 && y>=0 && x<n && y<m && grid[x][y]!=0 && dp[x][y]==0 ){
                        dp[x][y]=1;
                          q.push(make_pair(x,y));
                    }
                    
                }
                
                
            }
            
            
        }
        
        
        
        vector<vector<int> > ans;
        sort(v.begin(),v.end());
        
        int tt =v.size();
        // cout<<"tt "<<tt<<endl;
        int p=min(k,tt);
        for(int i=0; i< p; i++){
            ans.push_back({v[i][2],v[i][3]});
        }
        
        return ans;
        
        
    }
};
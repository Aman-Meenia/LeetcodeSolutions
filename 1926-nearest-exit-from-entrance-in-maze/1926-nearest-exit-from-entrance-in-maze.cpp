class Solution {
public:
    int start ,end;
    int ans=INT_MAX;
//     void fun(vector<vector<char>> & v , int a , int b,int cnt ,vector<vector<int>> &vis){
//         int n = v.size();
//         int m = v[0].size();
//         if(a==0 || b==0 || a==n-1 ||b==m-1){
//             // cout<<a<<" "<<b<<endl;
//             if(start!=a||end!=b)
//             ans = min(ans,cnt);
//         }
        // int array1[4]={0,0,1,-1};
        // int array2[4]={1,-1,0,0};
        
//         for(int k=0; k<4; k++){
//             int x = a+array1[k];
//             int y = b+array2[k];
//             if(x>=0 && y>=0 && x<n &&y<m&&v[x][y]=='.'&&vis[x][y]!=-1){
//             if(cnt+1<vis[x][y]&&cnt+1<ans){
//                 vis[x][y]=cnt+1;
//                 fun(v,x,y,cnt+1,vis);
//             }
//             }
//         }
        
//     }
    
    int nearestExit(vector<vector<char>>& v, vector<int>& entrance) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int>> vis(n,vector<int>(m,INT_MAX));
         int array1[4]={0,0,1,-1};
        int array2[4]={1,-1,0,0};
        start=entrance[0];
        end = entrance[1];
        queue<pair<int,int> > pq;
        pq.push({start,end});
        
        vis[start][end]=0;

        while(!pq.empty()){
            
            int a = pq.front().first;
            int b  = pq.front().second;
            pq.pop();
            int cnt = vis[a][b];
            for(int k=0; k<4; k++){
                int x=a+array1[k];
                int y=b+array2[k];
                if(x>=0 && y>=0 && x<n && y<m && v[x][y]=='.'){
                    // cout<<x<<" y is "<<y<<endl;
                    if(cnt+1<vis[x][y]){
                        vis[x][y]=cnt+1;
                   if(x==0 || y==0 || x==n-1 ||y==m-1){
            if(start!=x||end!=y){
            ans = min(ans,vis[x][y]);
            }
        }
                        pq.push({x,y});
                    }
                }
            }
            
            
        }
       
        
        if(ans==INT_MAX) return -1;
        
        return ans;
    }
};
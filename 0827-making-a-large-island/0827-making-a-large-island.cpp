class Solution {
public:
     int array1[4]={0,0,1,-1};
        int array2[4]={1,-1,0,0};
    int cnt = 0;
    void fun(vector<vector<int> > &v , vector<vector<int> >& vis , int i , int j ,int target){
        
        int n = v.size();
        int m = v[0].size();
        for(int k=0; k<4; k++){
            int x = i+array1[k];
            int y = j+array2[k];
            if(x>=0 && y>=0 && x<n && y<m &&vis[x][y]==0 && v[x][y]==1 ){
                vis[x][y]=target;
                cnt++;
                fun(v,vis,x,y,target);
            }
        }
        
        
    }
    
    
    int largestIsland(vector<vector<int>>& v) {
        unordered_map<int,int> mp;
        int array1[4]={0,0,1,-1};
        int array2[4]={1,-1,0,0};
        int target = 0;
        int n = v.size();
        int ans= 0;
        int m = v[0].size();        vector<vector<int> > vis(n,vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j]==0 &&v[i][j]==1){
                    target++;
                    vis[i][j]=target;
                 cnt = 1;
                    fun(v,vis,i,j,target);
                    // cout<<"Cnt is "<<cnt<<endl;
                    mp[target]=cnt;
                    ans = max(ans,cnt);
                }
            }
        }
                                     
                                     
                   for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]==0){
                    // cout<<" I. "<<i<<" J. "<<j<<endl;
                    int a = i;
                    int b = j;
                        unordered_set<int> st;
                    for(int k=0; k<4; k++){
                        int x = a+array1[k];
                        int y = b+array2[k];
                   // cout<<x<<" Y is  "<<y<<endl;         cout<<v[x][y]<<endl;
                        if(x==1 && y==1&&x>=0 && y>=0 && x<n && y<m &&v[x][y]==1){
                            // cout<<"X  "<<x<<" Y "<<y<<endl;
                        }
                        if(x>=0 && y>=0 && x<n && y<m && v[x][y]==1){
                            // cout<<x<<"  "<<y<<endl;
                   st.insert(vis[x][y]);         
                        }
                    }
                    int temp = 0;
                    for(auto it:st){
                        temp+=mp[it];
                    }
                    ans = max(ans,temp+1);
                    
                }
            }
        }      
    
  return ans;
                                     
                                     
        
    }
};
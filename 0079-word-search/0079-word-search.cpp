class Solution {
public:
    
    
    bool fun(vector<vector<char> > & v , int index , string target ,int a , int b , vector<vector<int> > & vis){
        
        int n = v.size();
        int m = v[0].size();
        if(target.size()==index) return true;
        
        int array1[4]={0,0,1,-1};
        int array2[4]={1,-1,0,0};
        int ans = false;
        for(int k=0; k<4; k++){
            int x = a+array1[k];
            int y = b+array2[k];
            
            if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==0 && v[x][y]==target[index]){
                vis[x][y]=1;
            //     cout<<x<<"  y. "<<y<<endl;
            // cout<<target[index]<<endl;
      ans = ans||fun(v,index+1,target,x,y,vis);
             vis[x][y]=0;
            }
        } 
        return ans;
        
    }    
    
    
    
    bool exist(vector<vector<char>>& v, string s) {
        int n = v.size();
        int m = v[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]==s[0]){
vector<vector<int>> vis(n,vector<int>(m,0));
                    vis[i][j]=1;
                    
 if(fun(v,1,s,i,j,vis)) return true;
                }
            }
        }
        
        
        
        
        
        
        
        return false;
        
    }
};
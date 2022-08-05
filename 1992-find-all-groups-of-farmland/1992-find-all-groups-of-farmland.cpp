class Solution {
public:
    vector<vector<int> > ans;
    
    void fun(vector<vector<int> > & v, int a , int b){
    int array2[4]={1,-1,0,0};
        int array1[4]={0,0,1,-1};
        int lastx =a,lasty=b;
        queue<pair<int,int> > q;
        q.push({a,b});
        v[a][b]=0;
        
        while(!q.empty()){
            int size=q.size();
            for(int i=0; i<size; i++){
                int a1=q.front().first;
                int b1=q.front().second;
                q.pop();
                for(int k=0; k<4; k++){
                    int x=a1+array1[k];
                    int y=b1+array2[k];
                    // cout<<"x "<<x<<"  y  "<<y<<endl;
                    if(x>=0 && y>=0 && x<v.size() && y<v[0].size() && v[x][y]==1){
                        lastx=x;
                        lasty=y;
                            q.push({x,y});
                        v[x][y]=0;
                    }
                }
            }
        }
        
        ans.push_back({a,b,lastx,lasty});

    }
    
    
    
    
    
    vector<vector<int>> findFarmland(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(v[i][j]==1){
            fun(v,i,j);
        }
        
    }
}
        return ans;
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        vector<pair<int,int> > temp;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]==0){
                temp.push_back({i,j});
                }
            }
        }
        int size=temp.size();
        for(int i=0; i<size; i++){
            int x=temp[i].first;
            int y=temp[i].second;
            for(int k=0; k<m; k++){
                v[x][k]=0;
            }
             for(int k=0; k<n; k++){
                   v[k][y]=0; 
            }
            
            
            
        }
        
        
        
        
        
        

    }
};
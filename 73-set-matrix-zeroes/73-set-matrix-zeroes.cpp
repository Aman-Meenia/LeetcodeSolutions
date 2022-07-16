class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int rowcheck=0;
        int colcheck=0;
        int n=v.size();
        int m=v[0].size();
        for(int i=0; i<m; i++){
            if(v[0][i]==0){
                colcheck=1;
            }
        }
          for(int i=0; i<n; i++){
            if(v[i][0]==0){
                rowcheck=1;
            }
        }
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(v[i][j]==0){
                    v[i][0]=0;
                    v[0][j]=0;
                }
            }
        }
        
   for(int i=n-1; i>=1; i--){
            for(int j=m-1; j>=1; j--){
                if(v[i][0]==0 || v[0][j]==0){
                    v[i][j]=0;
                }
            }
        }
        
        
        if(colcheck==1){
            for(int i=0; i<m; i++){
           v[0][i]=0;
 
           }
        }
        
        if(rowcheck==1){
              for(int i=0; i<n; i++){
      v[i][0]=0;

        }
        }
        
        
        
        
    }
};
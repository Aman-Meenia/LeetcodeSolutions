class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        
        double dp1[n][n];
        memset(dp1,0,sizeof dp1);
            
          double dp2[n][n];
          memset(dp2,0,sizeof dp2);
        dp1[row][column]=1;
        int array1[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int array2[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
        for(int moves=0; moves<k; moves++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
if(dp1[i][j]!=0){
    for(int t=0; t<8; t++){
        int a=i+array1[t];
        int b=j+array2[t];
        if(a>=0 && b>=0 && a<n && b<n){
            dp2[a][b]+=dp1[i][j]/(8.0);

        }
    }
    
}
            }
        }
           for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                dp1[i][j]=dp2[i][j];
            }
        }
            memset(dp2,0,sizeof dp2);
        }
        double ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                ans+=dp1[i][j];
            }
        }
        return ans;
    }
};
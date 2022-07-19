class Solution {
public:
   int dp[101][101];
int fun(int x, int y , int i , int j ){
    if(i==x-1 && j==y-1) return 1;
     if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int array1[2]={1,0};
    int array2[2]={0,1};
    int sum=0;
    
for(int k=0; k<2; k++){
    int a=i+array1[k];
    int b=j+array2[k];
    // cout<<a<<" b  "<<b<<endl;
    if(a>=0 && b>=0 && a<x && b<y){
        sum+=fun(x,y,a,b);
    }
}
    return dp[i][j]=sum;
    
}
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof dp);
        return fun(m,n,0,0);
    }
};
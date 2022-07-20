class Solution {
public:
//     int dp[102][102];
// int minimumcutscost(vector<int> & v, int i , int j ){

// if(i>j){
//     return 0;
// }if(dp[i][j]!=-1) return dp[i][j];

//     int ans=INT_MAX;
// for(int k=i; k<=j; k++){
//     int cost=minimumcutscost(v,i,k-1)+minimumcutscost(v,k+1,j)+v[j+1]-v[i-1];
//     ans=min(ans,cost);
// }

// return dp[i][j]= ans;

// }


    int minCost(int n, vector<int>& v) {
        int size=v.size();
         v.insert(v.begin(),0);
v.push_back(n);
        sort(v.begin(),v.end());
      int dp[v.size()][v.size()];
        memset(dp,0,sizeof dp);
        
        for(int i=size; i>=1; i--){
            for(int j=1; j<=size; j++){
                if(i>j) continue;
              int ans=INT_MAX;
for(int k=i; k<=j; k++){
    int cost=dp[i][k-1]+dp[k+1][j]+v[j+1]-v[i-1];
    ans=min(ans,cost);
}   
                dp[i][j]= ans;
            }
        }
        

       return  dp[1][size];
    }
};
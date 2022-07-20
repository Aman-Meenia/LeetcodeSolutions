class Solution {
public:
    int dp[102][102];
int minimumcutscost(vector<int> & v, int i , int j ){

if(i>j){
    return 0;
}if(dp[i][j]!=-1) return dp[i][j];

    int ans=INT_MAX;
for(int k=i; k<=j; k++){
    int cost=minimumcutscost(v,i,k-1)+minimumcutscost(v,k+1,j)+v[j+1]-v[i-1];
    ans=min(ans,cost);
}

return dp[i][j]= ans;

}


    int minCost(int n, vector<int>& v) {
         v.insert(v.begin(),0);
v.push_back(n);
        sort(v.begin(),v.end());
       
        memset(dp,-1,sizeof dp);
       return  minimumcutscost(v,1,v.size()-2);
    }
};
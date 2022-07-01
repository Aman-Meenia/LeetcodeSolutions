class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& v) {
       int n=v.size();
int m=v[0].size();
queue<pair<int,int> > q;
vector<vector<int> > ans(n,vector<int>(m));
        int dp[n+1][m+1];
memset(dp,-1 ,sizeof dp);
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
if(v[i][j]==0){
    q.push({i,j});
    dp[i][j]=1;
    }
}
}
int array1[4]={0,0,-1,1};
int array2[4]={1,-1,0,0};

int temp=0;
while(!q.empty()){
int size=q.size();
for(int i=0; i<size; i++){
int x=q.front().first;
int y=q.front().second;
q.pop();
ans[x][y]=temp;
for(int k=0; k<4; k++){
    int a=x+array1[k];
    int b=y+array2[k];
    if(a>=0 && b>=0 && a<n && b<m && dp[a][b]==-1){
        dp[a][b]=1;
q.push(make_pair(a,b));
    }
}


}
temp+=1;

}
return ans; 
    }
};
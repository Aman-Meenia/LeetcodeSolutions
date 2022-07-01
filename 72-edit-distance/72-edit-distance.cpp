class Solution {
public:
    int dp[501][501];
    int editdistance(string s1, string s2, int n , int m){

    if(n<0){
    return m+1;
}else if(m<0){
    return n+1;
}
// using dp
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
//  if we insert character 
int ans=INT_MAX, ans1=INT_MAX , ans2=INT_MAX , ans3=INT_MAX;
if(s1[n]==s2[m]){
    ans=editdistance(s1,s2,n-1,m-1);
}else{
ans1=1+editdistance(s1,s2,n,m-1);
ans2=1+editdistance(s1,s2,n-1,m);
ans3=1+editdistance(s1,s2,n-1,m-1);
}

ans=min(ans,ans1);
ans=min(ans,ans2);
return dp[n][m]=min(ans,ans3);



}


    int minDistance(string s1, string s2) {
int n=s1.size()-1;
int m=s2.size()-1;
        memset(dp,-1,sizeof dp);
        return editdistance(s1,s2,n,m);
    }
};
class Solution {
public:
    int dp[1001][1001];
    int fun(string &s1 , string &s2 , int index1, int index2){
        if(index2==s2.size()) return 1;
        if(index1==s1.size()) return 0;
        int ans1=0,ans2=0;
        if(dp[index1][index2]!=-1) return dp[index1][index2];
        if(s1[index1]==s2[index2]){
         ans1 = fun(s1,s2,index1+1,index2+1);
        }
       ans2 = fun(s1,s2,index1+1,index2);
        return dp[index1][index2]=ans1+ans2;
    }
    
    
    int numDistinct(string s, string t) {
        memset(dp,-1,sizeof dp);
        return fun(s,t,0,0);
    }
};
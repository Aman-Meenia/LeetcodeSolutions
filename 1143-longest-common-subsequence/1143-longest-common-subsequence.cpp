class Solution {
public:
    int dp[1001][1001];
    int fun(string & s1 , string & s2, int index1, int index2){
        
        if(index1==s1.size() ||s2.size()==index2){
            return 0;
        }
        if(dp[index1][index2]!=-1) return dp[index1][index2];
         int ans1=0,ans2=0,ans3=0;
        if(s1[index1]==s2[index2]){
         ans1=1+fun(s1,s2,index1+1,index2+1);
        }else{
          ans2=  fun(s1,s2,index1+1,index2);
            ans3 =fun(s1,s2,index1,index2+1);
        }
        return dp[index1][index2]= max(max(ans1,ans2),ans3);
        
        
    }
    int longestCommonSubsequence(string s1 ,string s2) {
        memset(dp,-1,sizeof dp);
        return fun(s1,s2,0,0);
    }
};
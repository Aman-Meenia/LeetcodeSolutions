class Solution 
{
public:
    string longestPalindrome(string s)
    {
         int n=s.size();

int dp[n][n];
memset(dp,0,sizeof dp);
int start=0;
int maxlength=0;
for(int i=0; i<n; i++){
    dp[i][i]=1;
    start=i;
    maxlength=1;
}
    
for(int i=0; i<n-1; i++){
    if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                start=i;
                maxlength=2;
            }
}
for(int j=2; j<n; j++){
int t=j;
    for(int i=0; i<n-j; i++){
                if(s[i]==s[t] && dp[i+1][t-1]==1)
                {
                    dp[i][t]=true;


                    if(t-i+1>maxlength){
                        start=i;
                        maxlength=t-i+1;
                    }
                 
                }
t++;

    }
}
        return s.substr(start,maxlength);
    }
};
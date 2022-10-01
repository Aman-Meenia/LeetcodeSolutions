class Solution {
public:
    int dp [101][2];

    int fun(string & s , int index , int total , bool cnd){
    if(index==s.size()){
       return 1;  
    }
   int ans  = 0;
        if(dp[index][cnd]!=-1) return dp[index][cnd];
        if(index==0){
            if(s[index]=='0') return 0;

         ans +=   fun(s,index+1,s[index]-'0',true);

        }else{
       
            int t = s[index]-'0';
            if(total*10+t<=26 && cnd==true){

            ans+=fun(s,index+1,total,false);

            }
                  if(s[index]=='0') return ans;

           ans+= fun(s,index+1,s[index]-'0',true);

        } 
    return  dp[index][cnd] =ans;
}
    
    
    
    
    
    
    int numDecodings(string s) {
        memset(dp,-1,sizeof dp);
        return fun(s,0,1,true);
    }
};
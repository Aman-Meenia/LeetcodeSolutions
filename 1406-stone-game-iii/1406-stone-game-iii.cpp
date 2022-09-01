class Solution {
public:
    int dp[50001];
    int fun(vector<int> & v , int i){
        int n = v.size();
        int ans =INT_MIN ;
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        ans = max(ans,v[i]-fun(v,i+1));
        if(i+1<n){
            ans = max(ans,v[i] + v[i+1] - fun(v,i+2));
        }
        if(i+2<n){
         
ans = max(ans,v[i]+v[i+1]+v[i+2]-fun(v,i+3));
        }
        
        return dp[i] = ans;
    }
    
    string stoneGameIII(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        int ans = fun(v,0);
        cout<<"Ans "<<ans<<endl;
        if(ans>0){
            return "Alice";
        }else if(ans==0){
            return "Tie";
        }
        return "Bob";
    }
};
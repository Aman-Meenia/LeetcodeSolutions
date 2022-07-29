class Solution {
public:
bool ispalindrome(int low , int high ,string & s){
    // cout<<" s "<<low<<" high "<<high<<endl;
    while(low<=high){
        if(s[low]!=s[high]){
            return false;
        }
        low++;
        high--;
    }

    return true;
}
    int dp[2001];
    int fun(string & s , int index){
        if(index==s.size()){
            return 0;
        }
        if(dp[index]!=-1) return dp[index];
        int ans=INT_MAX;
        
        for(int i=index; i<s.size(); i++){
            if(ispalindrome(index,i,s)){
            int temp=(1+fun(s,i+1));
                ans=min(ans,temp);
            }
        }
        
        return dp[index]=ans;
        
    }
    int minCut(string s) {
memset(dp,-1,sizeof dp);
         return fun(s,0)-1;
    }
};
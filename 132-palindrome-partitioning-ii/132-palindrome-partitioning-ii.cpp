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
    int minCut(string s) {
        int n = s.size();
        int dp[n+1];
memset(dp,0,sizeof dp);
        
//         base case

             dp[n]=0;

        
        for(int i=n-1; i>=0; i--){
   int ans=INT_MAX;
             for(int k=i; k<s.size(); k++){
            if(ispalindrome(i,k,s)){
            int temp=(1+dp[k+1]);
                ans=min(ans,temp);
            }
        }
        
   dp[i]=ans;  
            
            
        }
        
        
        
        
        
        
        
         return dp[0]-1;
    }
};
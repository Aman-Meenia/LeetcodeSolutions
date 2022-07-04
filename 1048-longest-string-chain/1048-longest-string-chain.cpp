class Solution {
public:
    
    static int cmp(string & a , string & b ){
        return a.size()<b.size();
    }
    bool compare(string & a, string & b){
        int n=0;
        int m=0;
        int count=0;
        while(n<a.size()&&m<b.size()){
            if(a[n]==b[m]){
                n++;
                m++;
            }else{
                n++;
                count+=1;
                if(count>1) return false;
            }
        }
        return true;
    }
    int longestStrChain(vector<string>& s) {
        int ans=1;
        int n=s.size();
        sort(s.begin(),s.end(),cmp);
     
//       using LIS 
        vector<int> dp(n,1);
        for(int i=0; i<n; i++){
            string temp=s[i];
            for(int j=0; j<i; j++){

if(s[j].size()+1==temp.size()&&compare(temp,s[j])){
    if(dp[j]+1>dp[i]){
        dp[i]=dp[j]+1;
    }
}
                
                
            }
            ans=max(ans,dp[i]);
        }
        
        
        
        

        return ans;
        
    }
};
class Solution {
public:
    static int cmp(vector<int>& a, vector<int>& b){
        if(a[1]==b[1]) return a[0]<b[0];
    return a[1]<b[1];
    }
    int maxTwoEvents(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),cmp);
        
        int n = v.size();        
        int ans= INT_MIN;
        vector<int> dp(n,0);
        dp[0]=v[0][2];
        ans = dp[0];
        for(int i=1; i<n; i++){
            int low = 0;
            int high = i-1;
            int previous=-1;
            while(low<=high){
                int mid = low +(high-low)/2;
                if(v[mid][1]<v[i][0]){
                    previous = mid;
                    low=mid+1;
                }else{
                    high = mid-1;
                }
            }
            dp[i]=v[i][2];
            if(previous!=-1){
            ans = max(ans,dp[i]+dp[previous]);   
            }else{
            ans = max(ans,dp[i]);
            }
            dp[i]=max(dp[i],dp[i-1]);
            
            
        }
        
        
        return ans;
        
    }
};
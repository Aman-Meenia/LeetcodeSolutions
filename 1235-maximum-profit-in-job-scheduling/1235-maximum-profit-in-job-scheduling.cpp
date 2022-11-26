class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int  n = profit.size();
        vector<vector<int> >v ;
        for(int i=0; i<n; i++){
            int a = startTime[i];
            int b = endTime[i];
                int c = profit[i];
            v.push_back({b,a,c});
        }
        sort(v.begin(),v.end());

        int ans = 0;
        
        
        vector<int> dp(n,0);
        dp[0]=v[0][2];

        for(int i=1; i<n; i++){
dp[i]=v[i][2];
      int previous = -1;
            int low = 0;
            int high = i-1;
            while(low<=high){
int mid = low +(high-low)/2;
                if(v[mid][0]<=v[i][1]){
                    previous=mid;
                    low=mid+1;
                }else{
                    high=mid-1;
                }
                if(previous!=-1){
                    dp[i]=v[i][2]+dp[previous];
                }else{
                    dp[i]=v[i][2];
                }
                dp[i]=max(dp[i],dp[i-1]);
                
            }
            
            
            
            
            
            
        }
        
        return dp[n-1];
        
//         for(auto a:dp){

//             ans = max(ans,a);
//         }
        
        
        
        
        
//         return ans;
        
        
    }
};
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& v) {
        int n=v.size();
        vector<int> anss;
        sort(v.begin(),v.end());
        vector<int> dp(n,1);
        vector<int> temp(n);
        for(int i=0; i<n; i++){
temp[i]=i;
        }
        int ans=1;
        int lastindex=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(dp[j]+1>dp[i] && v[i]%v[j]==0){
                    dp[i]=dp[j]+1;
                    temp[i]=j;
                }
            
            }
            if(dp[i]>ans){
                ans=dp[i];
                lastindex=i;
            
            }
            
        }
        anss.push_back(v[lastindex]);
        while(temp[lastindex]!=lastindex){
            lastindex=temp[lastindex];
            anss.push_back(v[lastindex]);
        }
reverse(anss.begin(),anss.end());
        return anss;
    }
};
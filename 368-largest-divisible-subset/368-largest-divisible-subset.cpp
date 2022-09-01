class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& v) {
        sort(v.begin(),v.end());
      vector<int> ans;
        int n = v.size();
        vector<int> dp(n,1);
        vector<vector<int> > temp;
        for(auto a:v){
            temp.push_back({a});
        }
        for(int i=0; i<n; i++){
            
            for(int j=0; j<i; j++){
                if(v[i]%v[j]==0){
                    if(dp[j]+1>dp[i]){
                           dp[i]=max(dp[j]+1,dp[i]);
                        temp[i].clear();
          temp[i].assign(temp[j].begin(),temp[j].end());
                        temp[i].push_back(v[i]);
                    }
                 
                }
                
            }
            
            
        }
int maxans=1;
        for(auto a:dp){
            maxans = max(maxans,a);
        }
       
        
       
        for(int i=0; i<n; i++){
            if(temp[i].size()==maxans){
                return temp[i];
            }
        }
        
        
return {-1};
    }
};
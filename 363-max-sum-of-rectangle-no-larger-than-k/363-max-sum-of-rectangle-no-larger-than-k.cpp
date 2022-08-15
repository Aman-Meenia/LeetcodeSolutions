class Solution {
public:
    
    int fun(vector<int> & v, int k){
        set<int> accuSet;
            accuSet.insert(0);
            int curSum = 0, curMax = INT_MIN;
            for (int sum : v) {
                curSum += sum;
                set<int>::iterator it = accuSet.lower_bound(curSum - k);
                if (it != accuSet.end()) curMax = std::max(curMax, curSum - *it);
                accuSet.insert(curSum);
            }

   return curMax;
    }
    
    
    int maxSumSubmatrix(vector<vector<int>>& v, int kk) {
        int n = v.size();
        int m = v[0].size();
        
        int ans = INT_MIN;
        for(int k=0; k<n; k++){
            
               vector<int> t(m,0);
            for(int i=k; i<n; i++){
              
                for(int j=0; j<m; j++){
                  t[j]+=v[i][j];
                }
                
              ans = max(ans,fun(t,kk));
                
                
            }
            
            
            
        }
        return ans;
        
    }
};
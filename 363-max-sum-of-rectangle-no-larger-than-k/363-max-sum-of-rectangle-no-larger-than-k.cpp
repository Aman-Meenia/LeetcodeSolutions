class Solution {
public:
//      how to find. the subarray sum less than equal to k  
    int fun(vector<int> & v, int k){
  int n = v.size();
     set<int> st;
        st.insert(0);
        int ans =INT_MIN;
        int cursum = 0;
        for(int i=0; i<n; i++){
cursum+=v[i];
        auto it = st.lower_bound(cursum-k);
            if(it!=st.end()){
                ans = max(ans,cursum-*it);
            }
            st.insert(cursum);
        
        }
return ans;
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
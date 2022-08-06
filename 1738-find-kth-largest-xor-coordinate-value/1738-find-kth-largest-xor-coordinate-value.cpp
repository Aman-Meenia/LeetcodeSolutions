class Solution {
public:
    int kthLargestValue(vector<vector<int>>& v, int k) {
priority_queue<int,vector<int>,greater<int> > pq;   
        int n =v.size();
        int m =v[0].size();
//         vector<int> ans;
        
//         vector<vector<int> > dp(n,vector<int>(m));
        
        
//         for(int i=0;  i<n; i++){
//             int t=0;
//             for(int j=0; j<m; j++){
//                 dp[i][j]=v[i][j]^t;
//                 t=dp[i][j];
//             }
//         }
        
        
        
        
        
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
 
               if(i)
                    v[i][j]^=v[i-1][j];
                if(j)
                    v[i][j]^=v[i][j-1];
                if(i && j)
                    v[i][j]^=v[i-1][j-1];
                pq.push(v[i][j]);
                if(pq.size()>k) pq.pop();
            }
        }
       
 

        return pq.top();
         
    }
};
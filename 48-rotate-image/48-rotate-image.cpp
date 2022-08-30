class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        
        int n = v.size();
        int m= v[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i<j){

                    swap(v[i][j],v[j][i]);
                }
            }
        }
           for(int i=0; i<n; i++){
  
               int start =0;
               int end= m-1;
               while(start<end){
                   swap(v[i][start],v[i][end]);
                   start++;
                   end--;
               }
            
        }
    
        
    }
};
class Solution {
public:
    
    
    int  fun(vector<vector<int> > &v, int x, int y , int k){  
       int n=v.size();
        int m=v[0].size();
        
        int a1=x-k;
        int a2=x+k;
        int b1=y-k;
        int b2=y+k;
        if(a1<0){
            a1=0;
        }if(b1<0){
            b1=0;
        }if(a2>=n){
            a2=n-1;
        }if(b2>=m){
            b2=m-1;
        }
        
        
        
        
        int sum=0;
        for(int i=a1; i<=a2; i++){
            
            for(int j=b1; j<=b2; j++){
                
                    sum+=v[i][j];

            }
            
            
        }
        
        
        return sum;
    }
    
    
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& v, int k) {
       
       int n=v.size();
        int m=v[0].size();
        vector<vector<int> > ans(n, vector<int>(m));
        
        for(int i=0; i<n; i++){
            
            for(int j=0; j<m; j++){
                
             ans[i][j] =fun(v , i , j , k);
                
            }
            
        }
        
        return ans;
        
        
    }
};
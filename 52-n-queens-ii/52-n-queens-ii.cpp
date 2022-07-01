class Solution {
public:
    
    int ans=0;
bool issafe(vector<vector<int>> &v ,int x ,int y){
    int n=v.size();
    int array1[8]={0,0,-1,1,1,-1,-1,1};
    int array2[8]={1,-1,0,0,1,-1,1,-1};

    for(int k=0; k<8; k++){
        int a=x;
        int b=y;
        
        while(a>=0 && b>=0 && a<n && b<n){
           if(v[a][b]==1){
               return false;
           } 
            a+=array1[k];
            b+=array2[k];
            
        }
        
    }
    
    return true;
    
    
    
}
bool nqueen(vector<vector<int> > &v , int row ,int n){
    
    for(int column = 0; column < n ; column++ ){
        if(issafe(v,row,column)){
            
            if(row==n-1){
                ans++;
                return false;
            }
            v[row][column]=1;
            if(nqueen(v ,row+1, n)){
                return true;
            }
            v[row][column]=0;
            
        }
        
        
    }
    
return false;
    
}
    
    
    
    
    
    
    int totalNQueens(int n) {
        vector<vector<int> > v(n,vector<int> (n,0));
        nqueen(v,0,n);
return ans; 
    }
};
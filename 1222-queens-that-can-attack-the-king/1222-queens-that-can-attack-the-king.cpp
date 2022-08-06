class Solution {
public:
    
    

    bool fun(vector<vector<int> > & v, int a ,int b){
        
        
        int n = v.size();
        int m = v[0].size();
        int array1[8]={1,-1,0,0,1,1,-1,-1};
        int array2[8]={0,0,1,-1,1,-1,-1,1};
        
        
for(int k=0; k<n; k++){
    int x= a ;
    int y = b;
     x+=array1[k];
        y+=array2[k];
    while(x>=0 && y>=0 && x<n && y<m && v[x][y]==0 ||
         x>=0 && y>=0 && x<n && y<m && v[x][y]==1){
    

        
        if(v[x][y]==1){
return true;
        }
        
            x+=array1[k];
        y+=array2[k];
    }
    
}

        
        return false;
        
        
        
        
    }
    
    
    
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
       vector<vector<int> > ans;
        vector<vector<int> > v(8,vector<int> (8,0));
        
        for(auto a: queens){
            v[a[0]][a[1]]=2;
        }
        v[king[0]][king[1]]=1;
        for(auto a: queens){
            if(fun(v,a[0],a[1])){
                ans.push_back({a[0],a[1]});
            }
    
            
        }
        
        return ans;
    }
};
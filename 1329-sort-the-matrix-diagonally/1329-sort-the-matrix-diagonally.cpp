class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& v) {
       
        
        int n = v.size();
        int m = v[0].size();
        for(int i=0; i<m; i++){
          
            
            vector<int> t; 
            int x=0;
            int y=i;
            while(x>=0 && y>=0 && x<n &&y<m){
t.push_back(v[x][y]);
                x+=1;
                y+=1;
            }
            sort(t.begin(),t.end());
       //        for(auto a:t){
       //     cout<<a<<" ";
       // }cout<<endl;
             x=0;
             y=i;
            int p=0;
            while(x>=0 && y>=0 && x<n &&y<m){
v[x][y]=t[p];
                x+=1;
                y+=1;
                p++;
            }
            
            
        }
        
        
        
        for(int i=1; i<n; i++){
            int x=i;
            int y=0;
            vector<int> t;
              while(x>=0 && y>=0 && x<n &&y<m){
t.push_back(v[x][y]);
                x+=1;
                y+=1;
            }
            sort(t.begin(),t.end());
       // for(auto a:t){
       //     cout<<a<<" ";
       // }cout<<endl;
             x=i;
            
             y=0;
            int p=0;
            while(x>=0 && y>=0 && x<n &&y<m){
v[x][y]=t[p];
                x+=1;
                y+=1;
                p++;
            }
            
        }
        
        
        
        
        
        
        return v;
        
        
        
        
        
        
    }
};
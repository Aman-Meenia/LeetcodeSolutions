class Solution {
public:
    int countSquares(vector<vector<int>>& v) {
       
        int n=v.size();
        int m=v[0].size();
       
       int array1[3]={-1,-1,0};
int array2[3]={0,-1,-1};

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
     if(v[i][j]==0){
        continue;
     }
     int x=i;
     int y=j;
     for(int k=0; k<3; k++){
        x=i+array1[k];
        y=j+array2[k];
         
if(x>=0&&y>=0&&x<n&&y<m&&v[x][y]!=0){
if(k==2){
  int t1=v[i+array1[0]][j+array2[0]];
      int t2=v[i+array1[1]][j+array2[1]]; 
    int t3 =v[i+array1[2]][j+array2[2]];
    t1=min(t1,t2);
    t1=min(t1,t3);
   v[i][j]+=t1; 
}
    
}else{
    break;
}
         
     }   
    }
    
}
        int ans=0;
        for(auto a:v){
            for(auto b:a){
                ans+=b;

            }
        }
return ans;
        
    }
};
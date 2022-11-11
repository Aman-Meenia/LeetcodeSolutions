class Solution {
public:
    
bool issafe(vector<vector<char> > & v , int a , int b ){
        int array1[8]={0,0,1,-1,1,-1,-1,1};
        int array2[8]={1,-1,0,0,1,1,-1,-1};

int n = v.size();

        for(int i=0; i<8; i++){
            int x =a;
            int y =b;
while(x>=0 && y>=0 && x<n && y<n){
if(v[x][y]=='Q') return false;
x+=array1[i];
y+=array2[i];
}


        }
        
        
return true;


}





vector<vector<string> > ans;
void queen(vector<vector<char> > & v , int x , int n ){

    for(int y=0; y<n; y++){

        if(issafe(v,x,y)){
v[x][y]='Q';
if(x==n-1){
vector<string> temp;

for(int i=0; i<n; i++){
    string tt;
 for(int j=0; j<n; j++){
    tt.push_back(v[i][j]);
 }
 temp.push_back(tt);
}
ans.push_back(temp);



v[x][y]='.';
return ;
}
queen(v,x+1,n);
v[x][y]='.';

        }
    }
}




    vector<vector<string>> solveNQueens(int n) {
      vector<vector<char> > v(n,vector<char>(n,'.'));

queen(v,0,n);  
      return ans;
        
        
        
        
    }
};
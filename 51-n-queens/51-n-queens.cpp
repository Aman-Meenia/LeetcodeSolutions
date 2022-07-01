class Solution {
public:
    
bool issafe(int x , int y , vector<vector<char> > & v){
int n=v.size(); 


// int array1[8]={-1, 1 , 0 , 0 , 1 , -1 , 1 , -1};
// int array2[8]={-1, 1 , 1 , -1 , 0 , 0 , -1 , 1};


int array1[]={1, -1, 0 , 0,1,-1,-1,1};
int array2[]={0, 0, -1, 1,1,-1,1,-1};

for(int i=0; i<8; i++){
int a=x;
int b=y;
while(a>=0 && b>=0 && a<n && b<n ){
    if(v[a][b]=='Q'){
    return false;
}
    a+=array1[i];
    b+=array2[i];

}

}

return true;


}


vector<vector<string> > ans;
bool nqueen(int row , vector<vector<char> > & v, int n){
// if(row==n){
//     return true;
// }
for(int column=0; column<n; column++){
// cout<<" row "<<row<<" column "<<column<<endl;
if(issafe(row,column,v)){
v[row][column]='Q';
if(row==n-1){

     vector<string> temp;
for(auto a:v){
    string t;
    for(auto b:a){
        t.push_back(b);
    }
temp.push_back(t);
}
ans.push_back(temp);
    v[row][column]='.';
return false;

}

if(nqueen(row+1,v,n)){
   


    return true;
}

v[row][column]='.';

}


}




return false;

}


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char> > v(n,vector<char> (n,'.'));
nqueen(0,v,n);
       return ans; 
    }
};
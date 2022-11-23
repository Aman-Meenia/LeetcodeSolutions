class Solution {
public:
     bool isValid(vector < vector < char >> & board, int row, int col, char c) {
  for (int i = 0; i < 9; i++) {
    if (board[i][col] == c &&row!=i)
      return false;

    if (board[row][i] == c &&col!=i)
      return false;
int a = 3 * (row / 3) + i / 3;
      int b =3 * (col / 3) + i % 3;
    if (board[a][b] == c){
        if(a==row&&b==col) continue;
      return false;
    }
  }
  return true;
}


bool fun(vector<vector<char> > & v,int start,int end ,vector<vector<int> >&vis){

int n = v.size();
int m = v[0].size();
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
if(v[i][j]!='.' &&vis[i][j]==0){
    char k = v[i][j];
    // for(char k='1'; k<='9'; k++){
        if(isValid(v,i,j,k)){
            v[i][j]=k;
            vis[i][j]=1;
            if(fun(v,i,j+1,vis)) return true;
            // else v[i][j]='.';
        }
    // }
    cout<<i<<" j "<<j<<endl;
    cout<<v[i][j]<<endl;
    return false;
    }
}

}
return true;
}

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int> > vis(n,vector<int>(m));
        bool ans =fun(board,0,0,vis);
        // for(auto a:board){
        //     for(auto b:a){
        //         cout<<b<<" ";
        //     }cout<<endl;
        // }cout<<endl;

        return ans;
    }
};
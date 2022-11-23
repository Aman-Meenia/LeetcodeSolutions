class Solution {
public:
    bool isValid(vector < vector < char >> & board, int row, int col, char c) {
  for (int i = 0; i < 9; i++) {
    if (board[i][col] == c)
      return false;

    if (board[row][i] == c)
      return false;

    if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
      return false;
  }
  return true;
}


bool fun(vector<vector<char> > & v){

int n = v.size();
int m = v[0].size();
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
if(v[i][j]=='.'){
    for(char k='1'; k<='9'; k++){
        if(isValid(v,i,j,k)){
            v[i][j]=k;
            if(fun(v)) return true;
            else v[i][j]='.';
        }
    }
    return false;
    }
}

}
return true;
}

    void solveSudoku(vector<vector<char>>& board) {
        // solveSudoku1(board);
        fun(board);
    }
};
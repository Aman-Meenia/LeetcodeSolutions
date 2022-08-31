class Solution {
public:
   
    int countBattleships(vector<vector<char>>& v) {
        int cnt = 0;
        int n = v.size();
        int m = v[0].size();

        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
if(v[i][j]=='X' && (i==0 || i>0 && v[i-1][j]!='X') && (j==0 || j>0 && v[i][j-1]!='X')){
    cnt++;
}
            }

        }
                    return cnt;
    }
};
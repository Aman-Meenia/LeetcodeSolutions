class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int n = v.size();
        int m = v[0].size();
        int i = 0;
        int j = m-1;
        
        while(i<n && j>=0){
            // cout<<v[i][j]<<endl;
             if(v[i][j]==target){
                return true;
            }
            if(v[i][j]==target){
                return true;
            }
            if(v[i][j]>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};
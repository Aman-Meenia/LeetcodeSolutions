class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int n = v.size();
        int m = v[0].size();
        int low = 0;
        int high = m-1;
        
        while(low<n && high>=0){

            if( v[low][high] == target ) return true;
            
            if( v[low][high] > target ){
              high--;  
            }else{
                low++;
            }
            
        }
        return false;
        
    }
};
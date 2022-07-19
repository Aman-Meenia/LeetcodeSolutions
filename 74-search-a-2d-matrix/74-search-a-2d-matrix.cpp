class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int n = v.size();
        int m = v[0].size();
        int low = 0;
        int high = m*n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(v[mid/m][mid%m]==target) return true;
            if(v[mid/m][mid%m]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
        
        
        
 
        
    }
};
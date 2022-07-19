class Solution {
public:
    bool binarysearch(vector<int> &v , int target){
        int low = 0;
        int high = v.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(v[mid]==target){
                return true;
            }
            if(v[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& v, int target) {
        for(int i=0; i<v.size(); i++){
     vector<int> t(v[i].begin(),v[i].end());
            if(binarysearch(t,target)) return true;
          }
        return false;
    }
};
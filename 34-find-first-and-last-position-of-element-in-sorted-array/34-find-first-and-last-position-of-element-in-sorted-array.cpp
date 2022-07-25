class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int n = v.size();
        int a = INT_MAX;
        int b =INT_MAX;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(v[mid]==target){
                a=mid;
                high=mid-1;
            }
            if(v[mid]<target){
                low=mid+1;
            }else if(v[mid]>target){
                high=mid-1;
            }
        }
            low = 0;
            high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(v[mid]==target){
                b=mid;
                low=mid+1;
            }
            if(v[mid]<target){
                low=mid+1;
            }else if(v[mid]>target){
                high=mid-1;
            }
        }
        
        
if(a==INT_MAX) return {-1,-1};
        return {a,b};
        
        
    }
};
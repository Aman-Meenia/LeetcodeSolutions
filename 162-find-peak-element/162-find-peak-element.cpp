class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int size=v.size();
        if(size==1){
return 0;
        }
        if(v[0]>v[1]) return 0;
        if(v[size-1]>v[size-2]){
            return size-1;
        }
        int low=1;
        int high=size-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(v[mid]>v[mid-1] && v[mid]>v[mid+1]){
                return mid;
            }else if(v[mid+1]>v[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
            
            
        }
        return -1;
    }
};
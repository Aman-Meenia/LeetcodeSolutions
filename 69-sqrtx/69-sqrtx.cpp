#define ll long long
class Solution {
public:
    
bool fun(int mid,int target){
    if((ll)mid*mid<=target){
        return true;
    }
    return false;
}
    
    
    
    
    int mySqrt(int x) {
        int low = 0;
        int high = INT_MAX;
        int ans = -1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(fun(mid,x)){
                ans = mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans ;
    }
};
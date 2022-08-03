#define ll long long
class Solution {
public:
    bool isPerfectSquare(int num) {

        int low = 0;
        int high = num;
        while(low<=high){
            int mid = low+(high-low)/2;
            if((ll)mid*(ll)mid == num){
                return true;
            }else if((ll)mid*(ll)mid < num){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return false;
    }
};
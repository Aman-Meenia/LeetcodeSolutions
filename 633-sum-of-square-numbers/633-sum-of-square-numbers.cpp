#define ll long long
class Solution {
public:
    bool judgeSquareSum(int c) {
        vector<ll> v;
      ll low= 0;
        ll high = sqrt(c);
        while(low<=high){
       
            if(low*low + high*high == c)
            {
                return true ;
            }
            else if(low*low + high*high < c)
            {
                low++ ;
            }
            else
            {
                high-- ;
            }
        }
        


return false;
    }
};
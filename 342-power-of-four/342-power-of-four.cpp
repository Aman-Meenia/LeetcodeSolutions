#define ll long long
class Solution {
public:
    bool isPowerOfFour(int n) {

        for(int i=0; i<1000; i++){
            ll t = pow(4,i);
            if(t==n) return true;
            if(t>n) return false;
        }

        return false;
    }
};
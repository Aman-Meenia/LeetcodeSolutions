#define ll long long
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
    ll t = sqrt(num);
        if(t*t==num) return true;
        return false;
    }
};
#define ll long long
class Solution {
public:
    bool isPowerOfThree(int n) {
        ll t = 1;
        int  i = 0;
while(t<INT_MAX){
t= pow(3,i);
    if(t==n) return true;
    else if(t>n) return false;
    i++;
}
        return false;
    }
};
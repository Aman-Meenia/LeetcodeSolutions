#define ll long long
class Solution {
public:
    bool isPowerOfFour(int n) {
while(n>1){
      if(n%4) return false;
    n=n/4;
}
        return n==1;
    }
};
// class Solution {
// public:
//     bool isPowerOfFour(int num) {
//         while(num > 1) {
//             if(num % 4)return false;
//             num /= 4;
//         }
//         return num == 1;
//     }
// };
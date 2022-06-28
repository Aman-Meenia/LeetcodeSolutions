#define ll long long
class Solution {
public:
     long long minimumPerimeter(long long x) {
       ll sum=0;
         ll n=1;
         while(sum<x){

             sum+=12*n*n;
                  n+=1;
         }
    
        return 8*(n-1);
    }
};
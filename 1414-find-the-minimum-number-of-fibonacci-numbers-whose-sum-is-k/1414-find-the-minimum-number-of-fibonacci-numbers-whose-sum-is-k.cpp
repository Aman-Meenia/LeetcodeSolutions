#define ll long long 
class Solution {
public:
    // int dp
    int targetsum(vector<int> & v, int i , int target){
        if(target==0){
            return 0;
        }else{
            return 1e7;
        }
    }
    
    
    
    
    
 
    
    int findMinFibonacciNumbers(int k) {

        vector<ll> v(2);
            v[0]=1;
            v[1]=1;
for(int i=2; i<100; i++){
    v.push_back(v[i-1]+v[i-2]);
    if(v[i]>1e9) break;
}
       

        int ans = INT_MAX ;
        int cnt = 0;
        int n = v.size();
        int target = k;
        for(int i=n-1; i>=0; i--){

                if(target>=v[i]){
                    target-=v[i];
                    cnt++;
               
                }
                if(target==0) break;
                
            }
            
        
        ans=min(ans,cnt);
        return ans;
    }
};
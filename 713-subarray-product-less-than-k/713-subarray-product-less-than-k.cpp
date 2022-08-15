#define ll long long
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        if(k==0||k==1) return 0;
        int ans = 0;
        int n = v.size();
        int low = 0;
        int high = 0;
        ll product = 1;
        while(high<n){
            product*=v[high];
            
            while(product>=k){
        
                product/=v[low];
                low++;
            }
               ans+=(high-low+1);
            high++;
        }
    
        
        
        return ans;
    }
};
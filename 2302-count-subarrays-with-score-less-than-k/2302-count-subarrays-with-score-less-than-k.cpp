#define ll long long
class Solution {
public:
    long long countSubarrays(vector<int>& v, long long k) {
        int n = v.size();
        int low = 0;
        int high = 0;
        ll ans = 0;
        ll sum = 0;
        while(high<n){
            sum+=v[high];
          if(v[high]>=k){
              low=high+1;
              sum=0;
          }
            while(sum*(high-low+1)>=k){
                sum-=v[low];
                low++;
                
            }
            ans+=high-low+1;
            high++;
        }
        return ans;
        
    }
};
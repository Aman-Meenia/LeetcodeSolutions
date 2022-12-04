#define ll long long
class Solution {
public:
    int minimumAverageDifference(vector<int>& v) {        int n = v.size();
        
        vector<ll> left(n);
        vector<ll> right(n);
        // int n = v.size();
        
        for(int i=0; i<n; i++){
            if(i==0){
                left[i]=v[i];
                continue;
            }
            left[i]=left[i-1]+v[i];
        }
        
        
        for(int i=n-1; i>=0;i--){
            if(i==n-1){
                right[i]=v[i];
                continue;
            }
            right[i]=right[i+1]+v[i];
        }
        int ans = INT_MAX;
        int index = 0;
        for(int i=0; i<n; i++){
            if(i==n-1){
ll temp = left[i]/n;
                if(temp<ans){
                    ans = temp;
                    index=i;
                }

                break;
            }
            ll ans1 = left[i]/(i+1);
            ll ans2= right[i+1]/(n-(i+1));

            ll temp = abs(ans1-ans2);
            if(temp<ans){
                    ans = temp;
                    index=i;
                }
  
        }
        return index;
    }
};
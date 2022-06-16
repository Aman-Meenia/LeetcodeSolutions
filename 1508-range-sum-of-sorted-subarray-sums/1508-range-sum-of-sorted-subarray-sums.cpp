#define ll long long
#define mod 1000000007
class Solution {
public:
    int rangeSum(vector<int>& v, int n, int lef, int right) {
 
        vector<int> ans;
        vector<int> left(n);
        left[0]=v[0];
        for(int i=1; i<n; i++){
            left[i]=left[i-1]+v[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int total=left[j];
                if(i>0){
                total-=left[i-1];
                }
                ans.push_back(total);
            }
            
        }
        sort(ans.begin(),ans.end());
        ll total=0;
        for(int i=lef-1; i<right; i++ ){
            total=(total %mod + ans[i]%mod)%mod;
        } 
        // for(auto a:ans){
        //     cout<<a<<" ";
        // }cout<<endl;
            return total;
        
        
    }
};
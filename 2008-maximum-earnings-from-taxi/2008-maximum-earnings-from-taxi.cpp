#define ll long long
class Solution {
public:
    static int cmp(vector<int> &a , vector<int> &b){
    if(a[1]==b[1]) return a[0]<b[0];
        return a[1]<b[1];
    }
    long long maxTaxiEarnings(int N, vector<vector<int>>& v) {
       
        sort(v.begin(),v.end(),cmp);
  //       for(auto a:v){
  // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
  //       }
        int n = v.size();
        vector<ll> dp(n,0);
        dp[0]=v[0][2]+v[0][1]-v[0][0];
        for(int i=1; i<n; i++){
           
            int low = 0;
            int high = i-1;
            int previous = -1;
            while(low<=high){
               int mid = low +(high-low)/2;
                if(v[mid][1]<=v[i][0]){
                    previous= mid;
                    low = mid+1;
                }else { 
                high = mid-1;
                }
            }

            if(previous!=-1){
               dp[i]=v[i][2]+dp[previous]+v[i][1]-v[i][0]; 
            }else{
                 dp[i]=v[i][2]+v[i][1]-v[i][0];
                }
        
            dp[i]=max(dp[i],dp[i-1]);
            
        }
    
        
        return dp[n-1];
        
    }
};
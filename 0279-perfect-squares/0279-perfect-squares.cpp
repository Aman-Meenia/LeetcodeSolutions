#define ll long long
class Solution {
public:
    ll dp[110][10010];
    ll fun(vector<ll> & v ,int index ,int target){
        // cout<<"Trarget "<<target<<endl;
        
        if(target==0){
            return 0;  
        }
        if(index==v.size()) return INT_MAX;
        if(dp[index][target]!=-1) return dp[index][target];
       ll ans1 = INT_MAX;
      ll ans2 = INT_MAX;
        if(v[index]<=target){
        ans1=1+fun(v,index,target-v[index]);
        }
        ans2=fun(v,index+1,target);
        return dp[index][target]=min(ans1,ans2); 
    }
    
    
    int numSquares(int n) {
        vector<ll> v;
        memset(dp,-1,sizeof dp);
        for(ll i=1; i<110; i++){
            v.push_back(i*i);
        }
            // for(auto a:v){
        //     cout<<a<<" ";
        // }cout<<endl;
        return fun(v,0,n);
    }
};
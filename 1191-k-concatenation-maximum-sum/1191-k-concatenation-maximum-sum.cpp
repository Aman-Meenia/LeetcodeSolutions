#define ll long long
#define mod 1000000007
class Solution {
public:
    
ll kadanes(vector<int> & v){
    ll maximumsum=v[0];
    ll temp = v[0];
    int n = v.size();
    for(int i=1; i<n; i++){
       temp=max(v[i]+temp,(ll)v[i]);
        maximumsum=max(maximumsum,temp);
    }
    // cout<<maximumsum<<endl;
    return maximumsum;
}
    
    int kConcatenationMaxSum(vector<int>& v, int k) {
      ll ans = 0;
        int n = v.size();
        ll sum = 0;
        for(auto a:v){
sum+=a;
        }
        if(k==1){
            if(kadanes(v)<0) return 0;
            else return kadanes(v);
        }else if(sum<0){
            for(int i=0; i<n; i++){
                v.push_back(v[i]);
            }
                if(kadanes(v)<0) return 0;
            else return kadanes(v);
        }else{
             
            
               for(int i=0; i<n; i++){
                v.push_back(v[i]);
            }
            sum=sum%mod;
             
                   return (kadanes(v)%mod + ((k-2)*sum)%mod)%mod;
        }
        
        
        
        
    
    }
};
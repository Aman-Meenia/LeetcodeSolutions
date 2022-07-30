
#define ll long long
class Solution {
public:
    long long getDescentPeriods(vector<int>& v) {
        int n = v.size();        
       ll ans=1;
        int dp=1;
        for(int i=n-2; i>=0; i--){
if(v[i]==v[i+1]+1){
   ans=ans+1+dp;
    dp=dp+1;
}else{
    ans+=1;
    dp=1;
}
            
        }
        // ll ans=0;
      
        return ans;
    }
};
#define ll long long 
#define mod 1000000007
class Solution {
public:
//     int fun(vector<int>& v, int index , int previous){

//     if(index==v.size()) return 0;
//     int ans =0;
//     if(v[index]>previous){
// if(v[index]==previous+1){
//     if(v[index]==2){
//          // cout<<"index "<<index<<endl;
//   return 1 +( fun(v,index+1,previous) + fun(v,index+1,2));
// }else{
//     return fun(v,index+1,previous+1);  
//     }
// }
// }else if(v[index]==previous){

// if(previous==2){
//     // cout<<"index "<<index<<endl;
//     return 1 + fun(v,index+1,previous) +fun(v,index+1,previous);
// }else{
//     return fun(v,index+1,previous);
// }


// }else if(v[index]<previous){

// return fun(v,index+1,previous) + fun(v,index+1,v[index]);


// }
// return ans;
// }
    ll dp[100001][4];
ll fun(vector<int>& v, int index , int previous){
    if(index==v.size()){
    if(previous==2) return 1;
    return 0;
}
    if(dp[index][previous+1]!=-1) return dp[index][previous+1];
    ll ans =0;
 
 if(v[index]==previous || v[index]==previous+1){
   ans=fun(v,index+1,v[index]) %mod;
     
 }

 ans= (ans %mod + fun(v,index+1,previous)%mod )%mod;



return dp[index][previous+1] =ans%mod;
}

    int countSpecialSubsequences(vector<int>& v) {
        //  for(auto a:v){
        //     cout<<a<<" ";
        // }cout<<endl;
        memset(dp,-1,sizeof dp);
        return fun(v,0,-1);
    }
};
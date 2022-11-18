#define ll long long
class Solution {
public:
    int dp[201][20002];
    bool fun(vector<int>&v , int target , int index){
    if(target==0){
        return true;
    }
    if(index==v.size()){
        return false;
    }
        if(dp[index][target]!=-1) return dp[index][target];
bool ans1=false,ans2=false;
    if(v[index]<=target){
        ans1= fun(v,target-v[index],index+1);
    }
    ans2 =fun(v,target,index+1);
    return dp[index][target]=ans1||ans2;
}

    bool canPartition(vector<int>& v) {
ll sum = 0;
for(auto a:v){
    sum+=a;
}
if(sum%2){
return false;
}
int target=sum/2;
        memset(dp,-1,sizeof dp);
return fun(v,target,0);

    }
};
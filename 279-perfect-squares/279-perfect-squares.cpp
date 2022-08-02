#define ll long long
class Solution {
public:
    
int dp[102][10001];
   ll targetsum(vector<int> & v, int index , int target,int cnt){
         if(target==0){
             // ans=min(ans,cnt);
return 0;
        }
       
        if(index==v.size()) return INT_MAX;
       if(dp[index][target]!=-1) return dp[index][target];
        int t1=INT_MAX,t2=INT_MAX;
        
        if(v[index]<=target){
         t1= 1+targetsum(v,index,target-v[index],cnt+1);
        }
         t2=targetsum(v,index+1,target,cnt);
        
       return dp[index][target] = min(t1,t2);
    }
    
    
    
    
    int numSquares(int n) {
          int i =1;
int t =0;
        vector<int> v;
        while(t<10000){
            t=i*i;
            v.push_back(t);
            i++;
        }
        reverse(v.begin(),v.end());
        memset(dp,-1,sizeof dp);
       return targetsum(v,0,n,0);
    }
};
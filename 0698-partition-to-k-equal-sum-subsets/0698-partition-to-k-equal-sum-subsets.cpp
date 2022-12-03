class Solution {
public:
    
    bool fun(vector<int>& v , int index , int k , vector<int> &vis,int sum , int target){
        if(k==1){
return true;
        }
        if(sum==target){
            return fun(v,0,k-1,vis,0,target);
        }
        for(int i=index+1; i<v.size(); i++){
            if(vis[i]==0 &&sum+v[i]<=target ){
                vis[i]=1;
               if(fun(v,i,k,vis,sum+v[i],target)) return true;
                vis[i]=0;
            }
        }
        
        return false;
        
        
        
    }
    bool canPartitionKSubsets(vector<int>& v, int k) {
        sort(v.begin(),v.end());
int sum = 0;
        for(auto a:v){
            sum+=a;
        }
        if(sum%k!=0) return false;
        int n = v.size();
        vector<int>vis(n,0);
        return fun(v,0,k,vis,0,sum/k);        
    }
};
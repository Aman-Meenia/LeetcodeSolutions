class Solution {
public:
    
 
//       In this we can make atmost k subarray so we try all possible ways and break subarray at every index 
//      But if our k == 1 that we take whole array which is left because we cannot further break the array 
    
    
    double fun(vector<int> & v ,int index , int k , double sum , double cnt,   vector<vector<double> > & dp){
        if(index>=v.size()){
            return 0;
        }
        
        if(dp[index][k]!=-1) return dp[index][k];

        if(k==1){
            double sum=0;
            for(int i=index; i<v.size(); i++){
                sum+=v[i];
            }
            return sum/(v.size()-index);
        }
        double ans = 0;
        for(int i=index; i<v.size(); i++){
           
            sum+=v[i];
            cnt++;

    ans=max(ans,sum/cnt + fun(v,i+1,k-1,0,0,dp));
            
        }
        return dp[index][k] = ans;
        
    }
    
    double largestSumOfAverages(vector<int>& v, int k) {
        int n = v.size();
    vector<vector<double> > dp(n+1,vector<double>(k+1,-1));
        return fun(v,0,k,0,0,dp);
     
  
    }
};
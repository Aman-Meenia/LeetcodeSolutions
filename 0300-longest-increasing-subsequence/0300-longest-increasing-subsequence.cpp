class Solution {
public:
    
    
    int fun(vector<int> & v){
                int n = v.size();
        vector<int> dp(n,0);
        
        // int ans =0;
        
vector<int> ans;
        for(int i=0; i<n; i++){
            int cnt = 0;
            if(ans.size()==0 ||ans.back()<v[i]){
                ans.push_back(v[i]);
            }else{
                int index = lower_bound(ans.begin(),ans.end(),v[i])-ans.begin(); 
                // cout<<"INDEX "<<index<<endl;
                ans[index]=v[i];
            }

            
        }
       
       return ans.size();
    }
    
    
    
    
    
    int lengthOfLIS(vector<int>& v) {
return fun(v);
    }
};
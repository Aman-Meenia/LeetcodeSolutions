class Solution {
public:
    int maxScore(vector<int>& v, int k) {
       
        
        int n =v.size();
        
        vector<int> left(n);
        vector<int> right(n);
        left[0]=v[0];
        for(int i=1; i<n; i++){
            left[i]=left[i-1]+v[i];
        }
        right[n-1]=v[n-1];
        for(int i=n-2; i>=0; i--){
            right[i]=right[i+1]+v[i];
        }
        reverse(right.begin(),right.end());

        int ans=0;
        for(int i=0; i<k; i++){
           
            int t=k-(i+1);
            int total=left[i];
            if(t-1>=0){
           total+=right[t-1];     
            }
         ans=max(ans,total);   
        }
       
        ans=max(ans,left[k-1]);
        ans=max(ans,right[k-1]);
        
        
        
return ans;
        
        
        
        
        
    }
};
class Solution {
public:
    int minimumMountainRemovals(vector<int>& v) {
        int n=v.size();
        

        vector<int> dp1(n,1);
           vector<int> dp2(n,1);
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(v[j]<v[i]&&dp1[j]+1>dp1[i]){
                    dp1[i]=dp1[j]+1;
                }
            }
            
        }
        reverse(v.begin(),v.end());
         for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(v[j]<v[i]&&dp2[j]+1>dp2[i]){
                    dp2[i]=dp2[j]+1;
                }
            }
            
        }
    reverse(dp2.begin(),dp2.end());

        int ans=0;
        for(int i=0; i<n; i++){
            if(dp1[i]>1&&dp2[i]>1){
            int temp=dp1[i]+dp2[i];
            ans=max(ans,temp);
            }

        }
        cout<<ans<<endl;
        return n-(ans-1);
    }
};
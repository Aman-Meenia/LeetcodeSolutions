class Solution {
public:
    int maxSubArray(vector<int>& v) {
       
    int maxsum=v[0];
        int tempsum=v[0];
        int n=v.size();
        for(int i=1; i<n; i++){
            tempsum=max(tempsum+v[i],v[i]);
            maxsum=max(tempsum,maxsum);
            
        }
        return maxsum;
        
    }
};
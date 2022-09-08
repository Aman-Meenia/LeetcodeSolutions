class Solution {
public:
    int triangleNumber(vector<int>& v) {
        int n = v.size();
        int ans = 0;
        sort(v.begin(),v.end());
        for(int i=n-1; i>0; i--){
            
          int low = 0;
            int high = i-1;
            while(low<high){
                if(v[low]+v[high]>v[i]){
                 ans += high-low;
                    high--;
                }else{
                    low++;
                }
            }
            
        }
        return ans;
    }
};
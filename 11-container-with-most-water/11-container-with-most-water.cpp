class Solution {
public:
    int maxArea(vector<int>& v) {
        int n = v.size();
        int low = 0;
        int high = n-1;
        int ans = 0;
        
        while(low<high){
            int t = min(v[low],v[high]);
            t= t*(high-low);
            ans=max(ans,t);
            if(v[low]<=v[high]){
                low++;
            }else{
                high--;
            }
        }
        return ans;
        
    }
};
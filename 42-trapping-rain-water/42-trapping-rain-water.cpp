class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size();
        int low = 0;
        int high = n-1;
        int left=0;
        int right=0;
        int ans =0;
        while(low<high){
            
            if(v[low]<=v[high]){
                if(v[low]>=left){
                    left=v[low];
                }else{
                    ans+=left-v[low];
                }
                low++;
            }else{
                if(v[high]>=right){
                    right=v[high];
                }else{
                    ans+=right-v[high];
                }
                high--;
            }
        }
        
        return ans;
        
    }
};
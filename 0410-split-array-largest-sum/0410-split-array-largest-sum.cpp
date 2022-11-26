class Solution {
public:
    
    bool fun(vector<int> &v , int target  , int k){
        int cnt = 1;
      int sum=0;
int n = v.size();
        for(int i=0; i<n; i++){
            if(v[i]>target) return false;
            sum+=v[i];
            if(sum>target){
                cnt++;
                sum=v[i];
            }
        }
        
        
        if(cnt<=k) return true;
        return false;
        
    }
    
    
    int splitArray(vector<int>& v, int k) {
        int low = 0;
        int high = INT_MAX;
        while(low<=high){
          int mid = low + (high-low)/2;
             // cout<<mid<<endl;
            if(fun(v,mid,k)){
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};
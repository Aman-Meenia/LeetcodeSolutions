#define ll long long 
class Solution {
public:
    
    bool binarysearch(int n , int index , int sum , int mid){
        ll k=mid-1;
        ll total=k*(k+1)/2;
        ll left=index;
        ll right=n-(index+1);
        ll totalsum=mid;
        // ll leftsum=left*(left+1)/2;
        // // ll rightsum=right*(right+1)/2;
        // totalsum+=leftsum;
        // totalsum+=rightsum;
        if(left>=k){
            // cout<<left-k<endl;
totalsum+=left-k;
            totalsum+=total;
        }else{
            ll p=k-left;
            ll sum1=p*(p+1)/2;
            totalsum+=total-sum1;
            
            
            
        }
        
        if(right>=k){  
            // cout<<" right "<<right-mid<<endl;
            totalsum+=right-k;
            totalsum+=total;
        }else{
             ll p=k-right;
            ll sum2=p*(p+1)/2;
            totalsum+=total-sum2;
            
        }
        
      
        // cout<<" mid "<<mid<<"  "<<totalsum<<endl;
        if(totalsum<=sum){
            return true;
        }
        return false;
        
        
    }
    
    
    int maxValue(int n, int index, int sum) {
        
        int low=1;
        int high=1000000009;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            // cout<<mid<<endl;
            if(binarysearch(n , index , sum , mid )){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return high;
    }
};
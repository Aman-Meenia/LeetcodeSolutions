class Solution {
public:
    bool binarysearch(vector<int> &v, int h , int mid){
        
        int ans=0;
        for(int i=0; i<v.size(); i++){
            int k=v[i];
          ans+=k/mid;
            if(k%mid!=0){
                ans++;
            }
        }
        // cout<<" ans "<<ans<<" mis "<<mid<<endl;
        if(ans<=h){
            return true;
        }
        return false;
        
        
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1;
        int high=INT_MAX;
        while(low<=high){
int mid=low+(high-low)/2;
            if(binarysearch(piles,h,mid)){
                high=mid-1;
            }else{
                low=mid+1;
                
            }
            
        }
        return low;
    }
};
class Solution {
public:
    int maxDistance(vector<int>& v, vector<int>& t) {
        int ans=0;
        int n=v.size();
        int m=t.size();
        for(int i=0; i<n; i++){
            int target=v[i];
            int low=i;
            int high=m-1;
            int mid;
            while(low<=high){
    int mid=low+(high-low)/2;
if(t[mid]>=target){
    low=mid+1;
}else{
    high=mid-1;
}
   
            
                
        }
            int temp=high-i;
 // cout<<" v[i]  "<<v[i]<<" temp[high] "<<t[high]<<endl;
     ans=max(ans,temp);    
        }
            return ans;
    }
};
class Solution {
public:
    
int fun(vector<int> &v,int mid ){
 int   sum=0;
for(auto a:v){
    sum+=min(mid,a);
}

   return sum;
    
}
    
    
    int findBestValue(vector<int>& v, int target) {

        int maximum=*max_element(v.begin(),v.end());
        int low=0;
        int high =maximum;
        
        int best;
        int ans=INT_MAX;
while(low<=high){
    int mid=low+(high-low)/2;
    int sum=fun(v,mid);
    if(sum<target){
    if(abs(sum-target)<=ans){
         if(ans==abs(sum-target)){
               best=min(mid,best);   
          }else{
                     best=mid;
          }
ans=abs(sum-target);

      }          low=mid+1;
    }else{
      if(abs(sum-target)<=ans){
          if(ans==abs(sum-target)){
               best=min(mid,best);   
          }else{
                     best=mid;
          }
ans=abs(sum-target);
        
       
      }  
        
        
        high=mid-1;
    }
    
}
        
        
        
        return best;
    }
};
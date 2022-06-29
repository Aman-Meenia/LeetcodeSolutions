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
        int ans=3;
        int maximum=*max_element(v.begin(),v.end());
        int low=0;
        int high =maximum;
        
        int leftbest,rightbest;
        int leftdiff=INT_MAX;
          int rightdiff=INT_MAX;
while(low<=high){
    int mid=low+(high-low)/2;
    int sum=fun(v,mid);
    if(sum<target){
      if(abs(sum-target)<leftdiff){
          leftdiff=abs(sum-target);
              leftbest=mid;
      }  
        low=mid+1;
    }else{
      if(abs(sum-target)<rightdiff){
          rightdiff=abs(sum-target);
              rightbest=mid;
      }  
        
        
        high=mid-1;
    }
    
}
        
        
        
        return leftdiff<=rightdiff ? leftbest :rightbest;
    }
};
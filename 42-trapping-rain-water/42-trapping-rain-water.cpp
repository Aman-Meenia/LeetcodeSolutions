class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size();
        int low = 1;
        int high = n-2;
        int ans = 0;
        int startval=v[0];
        int endval=v[n-1];
        while(low<=high){

            if(startval<=endval){     
          startval=max(startval,v[low]);
            int t =min(startval,endval);
                if(t>v[low])
            ans+=t-v[low];
              low++;
           
            
        }else{
            endval=max(endval,v[high]);
               int t =min(startval,endval);
                  if(t>v[high])
            ans+=t-v[high];
                  
              high--;
               
              
            
        }
            
            
            
            
        }
        return ans;
    }
};
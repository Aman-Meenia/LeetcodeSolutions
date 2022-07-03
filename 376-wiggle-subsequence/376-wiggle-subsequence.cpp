class Solution {
public:
    int wiggleMaxLength(vector<int>& v) {
        int n=v.size();
        if(n==2&&v[1]!=v[0])   return 2;
       int ans=0;
        for(int i=0; i<n; i++){
            int t=0;
            int check=1;
            for(int j=i; j<n-1; j++){
                int temp=v[j+1]-v[j];
  
                
                if(check==1&&temp>0){
               
                 check=0;
                    t+=1;
                }else if(check==0&&temp<0){
                 
                    check=1;
                    t+=1;
                }
            }
            
            ans=max(ans,t);
            t=0;
            check=0;
               for(int j=i; j<n-1; j++){
                int temp=v[j+1]-v[j];
  
                
                if(check==1&&temp>0){
               
                 check=0;
                    t+=1;
                }else if(check==0&&temp<0){
                 
                    check=1;
                    t+=1;
                }
            }
                ans=max(ans,t);
        }
        return ans+1;
    }
};
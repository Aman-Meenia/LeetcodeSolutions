class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        vector<int> left(n);
        vector<int> right(n);
        int count=0;
        if(s[0]=='a'){
            count++;
                left[0]=count;
        }else{
                left[0]=count; 
        }
    
        for(int i=1; i<n; i++){
      
               if(s[i]=='a'){
            count++;
                
        }
                  left[i]=count;
        }
        
        count=0;
          if(s[0]=='b'){
            count++;
                right[0]=count;
        }else{
        right[0]=count;
          }
        for(int i=1; i<n; i++){
            if(s[i]=='b'){
                count++;
            }
                   right[i]=count;
        }

        int amax=left[n-1];
        int bmax=right[n-1];

        int ans=min(amax,bmax);
        // cout<<ans<<endl;
        for(int i=0; i<n; i++){
            int a=amax-left[i];
            int b=right[i];
            int k=a+b;
            // cout<<" a  "<<a<<"  b. "<<b<<endl;
            // cout<<k<<endl;
            ans=min(ans,k);
        }
        return ans;
        
    }
};
#define ll long long
class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        ll temp = n;
        vector<int> v;
   
        ll sum = 0;
        while(temp>0){
    
            int t =temp%10;
                  sum+=t;
            v.push_back(t);
            temp=temp/10;
        }
        int k = 0;
   
        while(sum>target){

            sum-=v[k];
               v[k]=0;
            if(k==v.size()-1){
                v.push_back(1);
            }
                else{
                sum+=1;
            v[k+1]+=1;
            }
            k++;
            
        }
        
        
      ll ans = 0;
        for(int i=v.size()-1; i>=0; i--){
            ans=ans*10+v[i];
        }

       return ans-n; 
    }
};
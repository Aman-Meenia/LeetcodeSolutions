class Solution {
public:
    int numberOfSubarrays(vector<int>& v, int k) {
     
        int n = v.size();
   
        vector<int> left(n,0);
        vector<int> temp;
        
        for(int i=0; i<n; i++){
            if(i>0){
            if(v[i]%2==0){
                left[i]=left[i-1]+1;
            }else{
temp.push_back(i);
                }
            }else{
                if(v[i]%2==0){
                    left[i]=1;
                }else{
                    temp.push_back(i);
                }
            }
        }
        vector<int> right (n,0);
        for(int i=n-1; i>=0; i--){
if(i==n-1){
    if(v[i]%2==0) right[i]=1;
}else{
      if(v[i]%2==0) right[i]=1+right[i+1]; 
}
            }
        
        
        
        
        
int low = 0;
        int high = 0;
        int size = temp.size();
        int ans = 0;
      
        while(high<size){
            
            if(high-low+1==k){
                int start = temp[low];
                int end = temp[high];
                int startcnt=1;
                int endcnt=1;
                if(start>0){
                    startcnt+=left[start-1];
                }
                if(end<n-1){
                    endcnt+=right[end+1];
                }
                
                ans +=startcnt*endcnt;
                low++;
            }
            high++;
        }
        return ans;
        
        
        
    }
};
// 2,2,2,1,2,2,1,2,2,2
// 1 2 3 0 1 2 0 1 2 3 
    
//     1 1 2 1 1 
//     0 0 1 0 1
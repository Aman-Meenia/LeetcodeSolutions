class Solution {
public:
    int sumOfBeauties(vector<int>& v) {
        int n = v.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        
        int maximum=0;
        for(int i=0; i<n; i++){
maximum = max(maximum,v[i]);
            left[i]=maximum;
    
}
        
            int minimum = INT_MAX;
            for(int i=n-1; i>=0; i--){
minimum = min(minimum,v[i]);
                right[i]=minimum;
        }
          
            int ans = 0;
            for(int i=1; i<=n-2; i++){
if(left[i-1]<v[i] && right[i+1]>v[i]){
ans+=2;
}else if(v[i-1]<v[i]&&v[i]<v[i+1]) {
                    ans+=1;
            
            }
  
            }
         //    for(auto a:left){
         //        cout<<a<<" ";
         //    }cout<<endl;
         // for(auto a:right){
         //        cout<<a<<" ";
         //    }cout<<endl;
                      return ans;
            
    }
};
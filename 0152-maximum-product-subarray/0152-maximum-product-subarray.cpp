class Solution {
public:
    int maxProduct(vector<int>& v) {
        int product = INT_MIN;
        int temp =1;
        int n = v.size();
       for(int i=0; i<n; i++){
           temp = temp * v[i];
        
    product= max(product,temp);
           if(temp==0){
               temp = 1;
               }
       }
        temp = 1;
         for(int i=n-1; i>=0; i--){
           temp = temp * v[i];
          
    product= max(product,temp);
             if(temp==0){
               temp = 1;
               }
       }
        
        
        
        return product;
    }
};
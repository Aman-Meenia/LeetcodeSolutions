class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& v) {
        int n = v.size();
        if(n==1) return 0;
        if(n==2) return 0;
        int ans  = 0;
        int diff = v[1]-v[0];
        int length = 2;
        for(int i=2; i<n; i++){
            
            if(v[i]-v[i-1]==diff){
                length++;
            }else{
                int t = length-2;
            
                ans += t *(t+1)/2;
                diff=v[i]-v[i-1];
                length=2;
            }
        }
           int t = length-2;
            
                ans += t *(t+1)/2;
              
        return ans;
    }
};
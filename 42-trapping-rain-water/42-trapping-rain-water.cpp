class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size();
    vector<int> left(n);
        left[0]=v[0];
        for(int i=1; i<n; i++){
left[i]=max(v[i],left[i-1]);
        }
         vector<int> right(n);
        right[n-1]=v[n-1];
        for(int i=n-2; i>=0; i--){
right[i]=max(v[i],right[i+1]);
        }
        
        // for(auto a:left){
        //     cout<<a<<" ";
        // }cout<<endl;
        // for(auto a:right){
        //     cout<<a<<" ";
        // }cout<<endl;
int ans= 0;
        for(int i=0; i<n; i++){
            int temp = v[i];
            int minimum = min(left[i],right[i]);
if(minimum>temp){
    ans+=(minimum-temp);
}
        }
       return ans; 
        
        
    }
};
class Solution {
public:
    void nextPermutation(vector<int>& v) {
      
        int n=v.size();
        int index=INT_MAX;
        for(int i=1; i<n; i++){
            if(v[i]>v[i-1]){
             index=i-1;
            }
                
        }
        if(index==INT_MAX){
            sort(v.begin(),v.end());
            return ;
        }
        
        int temp=index+1;
        for(int i=index+1; i<n; i++){
            if(v[i]>v[index]){
                temp=i;
            }
        }
        swap(v[index],v[temp]);
        sort(v.begin()+index+1 ,v.end());
        
        
        
    }
};
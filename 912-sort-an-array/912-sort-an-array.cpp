class Solution {
public:
    
    void shellsort(vector<int> & v ){
        int n = v.size();
        for(int gap=n/2; gap>=1; gap=gap/2){
            for(int j=gap; j<n; j++){
                for(int i=j-gap; i>=0; i=i-gap){
                    if(v[i+gap]>v[i]){
                        break;
                    }else{
                        swap(v[i+gap],v[i]);
                    }
                }
            }
        }
    }
    
    
    
    
    vector<int> sortArray(vector<int>& v) {
        shellsort(v);
        return v;
    }
};
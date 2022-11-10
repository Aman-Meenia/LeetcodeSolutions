class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
int size = v.size();
        if(v.size()==1) return v[0];
    int low = 0;
        int high = v.size()-1;
        while(low<=high){
            
            int mid= low+(high-low)/2;
            cout<<"MId "<<mid<<endl;
            if(mid!=0 && mid!=size-1&&v[mid]!=v[mid+1] && v[mid]!=v[mid-1]){
                return v[mid];
            }else if(mid!=0 &&mid==size-1 && v[mid]!=v[mid-1]){
                return v[mid];
            }else if(mid!=size-1 && mid==0 &&v[mid]!=v[mid+1]){
                return v[mid];
            }
            
           if(mid%2==0 && v[mid]==v[mid-1]){
                high=mid-1;
          }else if(mid%2==0 && v[mid]==v[mid-1]){
               low=mid+1;
          }else if(mid%2==1 && v[mid]==v[mid+1]){
               high=mid-1; 
            }else{
               low=mid+1;
           }
            
    
        }
        return -1;
        
    }
};
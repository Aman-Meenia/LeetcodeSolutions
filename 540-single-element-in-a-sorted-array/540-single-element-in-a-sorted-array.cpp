class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        
        if(v.size()==1) return true;
        int low = 0;
        int high = v.size()-1;
        while(low<=high){
           
            int mid = low+(high-low)/2;
            cout<<mid<<endl;
            if(mid==0){
                if(v[mid]!=v[mid+1]) return v[mid];
                else low=mid+1;
            }else if(mid==v.size()-1){
                  if(v[mid]!=v[mid-1]) return v[mid];
                else high=mid-1;
            }else{
               if(v[mid]!=v[mid-1] && v[mid]!=v[mid+1]){
                   return v[mid];
               }else if(mid%2==0 && v[mid-1]==v[mid]||mid%2!=0 &&v[mid]==v[mid+1]){
               high=mid-1; 
            }else{
                low=mid+1;
                   // cout<<"check "<<low<<endl;
            }
            }
            
        }
        return -1;
    }
};
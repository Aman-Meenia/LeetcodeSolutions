class Solution {
public:
    bool search(vector<int>& v, int target) {
        
      int n = v.size();
        int low = 0;
    int high = n-1;

    while(low<=high){
int mid = low +(high-low)/2;
if(v[mid]==target){
return true;
} 
          if(v[low]==v[mid]&&v[mid]==v[high]){
        low++;
        high--;
    }else if(v[low]<=v[mid]){

if(target>=v[low] && target<=v[mid]){
high=mid-1;
}else{
    low=mid+1;
}


}else{

if(target>v[mid] && target<=v[high]){
    low=mid+1;
}else{
    high=mid-1;
}



}




    }
        return false;
    }
};
class Solution {
public:
    void nextPermutation(vector<int>& v) {
      int index = INT_MAX;
        int n=v.size();
        for(int i=1; i<n; i++){
if(v[i-1]<v[i]){
    index=i-1;
}
}
if(index==INT_MAX){
    sort(v.begin(),v.end());
    return ;
}

int ind=0;
for(int i=index+1; i<v.size(); i++){
if(v[i]>v[index]){
    ind=i;
}
}
swap(v[index],v[ind]);
int low = index+1;
int high = v.size()-1;
while(low<=high){
    swap(v[low],v[high]);
    low++;
    high--;
}



return ;

        
        
    }
};
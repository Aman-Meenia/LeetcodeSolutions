#define ll long long 
class Solution {
public:
    
ll ANS = 0;

void merge(vector<int> & v, int low , int mid ,int high){
    int i=low; 
    int j=mid+1;

    for(int k=low; k<=mid; k++){
        
while(j<=high && v[k]>(ll)2*(ll)v[j]){
    j++;
}
        ANS+=(j-(mid+1));
    
    }
    
    
    
    
    vector<ll > ans;
    
i=low; 
    j=mid+1;
    while(i<=mid && j<=high){
        if(v[i]<=v[j]){
            ans.push_back(v[i]);
            i++;

        }else{
            ans.push_back(v[j]);
            j++;
        }
    }

    while(i<=mid){
 ans.push_back(v[i]);
            i++;
    }
    while(j<=high){
        ans.push_back(v[j]);
        j++;
    }
   
  

int k=0;
    for(int i=low; i<=high; i++){
        v[i]=ans[k];
        k++;

    }
}




void mergesort(vector<int> & v , int low , int high){
    if(low<high){
        int mid = low +(high-low)/2;
        mergesort(v,low,mid);
        mergesort(v,mid+1,high);
        merge(v,low,mid,high);
    }
}

    int reversePairs(vector<int>& v) {
        int n = v.size();
        mergesort(v,0,n-1);
        return ANS;
    }
};
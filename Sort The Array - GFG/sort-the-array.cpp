//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    


int partition(vector<int>&v , int low , int high ){

int i = low;
int j = high;

while(i<j){

while(v[i]<v[low] && i<=high){
    i++;
}
while(v[j]>v[low] && j>=low){
    j--;
}
if(i<j) swap(v[i],v[j]);

}

swap(v[low],v[j]);


return j;



}


void quicksort( vector<int>&array , int low, int high ){
    if(low<high){
        int partitionindex = partition(array,low,high);
        quicksort(array, low, partitionindex-1);
        quicksort(array ,partitionindex+1, high);

    }
}



void merge(vector<int>&v  , int low  , int  mid , int high ){
	int i = low;
	int j = mid+1;
	int k = low;

	int temp[high+1];
while(i<=mid && j<=high){
	if(v[i]<v[j]){
		temp[k]=v[i];
		k++;
		i++;

	}else{
		temp[k]=v[j];
		k++;
		j++;
			}
}

while(i<=mid){
	temp[k]=v[i];
		k++;
		i++;
}

while(j<=high){
	temp[k]=v[j];
		k++;
		j++;
}



for(int i=low; i<=high; i++){
	v[i]=temp[i];
}


}
void mergesort(vector<int>&array, int low , int high ){
	if(low<high){
		int mid = low +(high-low)/2;
mergesort(array , low , mid);
mergesort(array , mid+1, high);
merge(array,low,mid,high);
	}
}








    vector<int> sortArr(vector<int>arr , int n){
  mergesort(arr,0,n-1);
    return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends
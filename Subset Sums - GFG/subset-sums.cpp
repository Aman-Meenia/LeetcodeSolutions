//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

vector<int> ans;
void fun(vector<int> arr , int i,int temp ){
    if(i>=arr.size()) {
        ans.push_back(temp);
        return ;

}
    fun(arr,i+1,temp);
    temp+=arr[i];
    fun(arr,i+1,temp);
    temp-=arr[i];
    
}


    vector<int> subsetSums(vector<int> arr, int N)
    {
        fun(arr,0,0);
        sort(ans.begin(),ans.end());
        
        return ans;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
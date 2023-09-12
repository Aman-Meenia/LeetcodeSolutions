//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static int cmp(vector<int>&a , vector<int> & b){
        
        return a[0]>b[0];
    }
    // Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int maximum=0;
        
        vector<vector<int> > v;
        for(int i=0; i<n; i++){
            v.push_back({arr[i].profit,arr[i].dead,arr[i].id});
            maximum=max(maximum,arr[i].dead);
        }
        
        sort(v.begin(),v.end(),cmp);
        
        set<int> st;
        for(int i=1; i<=maximum; i++){
            st.insert(-i);
        }
        
    vector<int> ans(2,0);
        for(int i=0; i<n; i++){
            int target = -v[i][1];
            if(st.size()==0) break;
            auto it = lower_bound(st.begin(),st.end(),target);
            if(it!=st.end()){
                // cout<<" i "<<v[i][0]<<endl;
         ans[1]+=v[i][0];
         ans[0]+=1;
                st.erase(it);
            }
            
        }
        

        return ans;
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends
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
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
priority_queue<pair<int,int> ,vector<pair<int,int> > > pq;
set<int> st;
for(int i=1; i<=100; i++){
    st.insert(i);
}
for(int i=0; i<n; i++){
    pq.push({arr[i].profit,arr[i].dead});
    // cout<<arr[i].dead<<endl;
    // for(int k=1; k<=arr[i].dead; k++) {
    //     // cout<<" I is "<<i<<endl;
    //     st.insert(k);
    // }
}

int ans = 0;
int cnt = 0;

while(!st.empty()  && !pq.empty()){
int prft=pq.top().first;
int dead=pq.top().second;
for(int i=dead; i>=1; i--){
    if(st.find(i)!=st.end()){
    
        ans+=prft;
        cnt++;
        auto it = st.find(i);
        st.erase(it);
        break;
    }
}
pq.pop();
}



return {cnt,ans};



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
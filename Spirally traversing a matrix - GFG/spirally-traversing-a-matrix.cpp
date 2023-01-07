//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > v, int r, int c) 
    {
        // code here 
        vector<int> ans;

int m= v.size();
int n = v[0].size();
int start = 0;
int end = 0;
while(n>0 && m>0 ){
//  MOVE RIGHT 
for(int i=0; i<n; i++){
    if(i==n-1){
ans.push_back(v[start][end]);
break;
    }
    ans.push_back(v[start][end]);
    end++;


}
if(m==1) break;
//  MOVE down
for(int i=0; i<m-1; i++){
    start++;
    ans.push_back(v[start][end]);

}if(n==1) break;




//  MOVE left

for(int i=0; i<n-1; i++){
    end--;
       ans.push_back(v[start][end]);
}


// MOVE UP
for(int i=0; i<m-2; i++){
    start--;
    ans.push_back(v[start][end]);

}
m-=2;
n-=2;
end++;
}

return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
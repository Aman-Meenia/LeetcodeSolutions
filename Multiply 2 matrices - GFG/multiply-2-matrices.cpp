//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void Mutliply(vector<vector<int> >& m1, vector<vector<int>>&m2) {
        // Code here
        int  n = m1.size();
vector<vector<int> > v(n,vector<int>(n,0));

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){

for(int k=0; k<n; k++){
v[i][j]+=m1[i][k]*m2[k][j];
}

    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    m1[i][j]=v[i][j];
    }
}
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Mutliply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends
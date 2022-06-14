class Solution {
public:
    
int lcs(string &s1, string &s2){
    int n=s1.size();
    int m=s2.size();
    vector<vector<int> > v(n+1,vector<int>(m+1,0));
    for(int i=0; i<=n; i++){
        v[i][0]=0;
    } for(int i=0; i<=m; i++){
        v[0][i]=0;
    }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(s1[i-1]==s2[j-1]){

                v[i][j]=1+v[i-1][j-1];
            }else{
                     v[i][j]=(max(v[i][j-1],v[i-1][j]));
            }

        }
    }
    return v[n][m];

}

    int minDistance(string s1, string s2) {
        int n=lcs(s1,s2);
        cout<<n<<endl;
        int size1=s1.size();
        int size2=s2.size();
        int ans=size1-n;
        ans+=size2-n;
        return ans;
    }
};
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& v) {
int n = v.size();
        int m = v[0].size();
        
        for(int i=0; i<n; i++){
            int temp = v[i][0];
            int a = i;
            int b = 0;
                cout<<" a "<<a<<" b "<<b<<endl;
while(a>=0 && b>=0 && a<n && b<m){

    if(v[a][b]!=temp) return false;
    a++;
    b++;
}
        }
        
           
        for(int i=1; i<m; i++){
            int temp = v[0][i];
            int a = 0;
            int b = i;
            cout<<"A   "<<a<<"B  "<<b<<endl;
while(a>=0 && b>=0 && a<n && b<m){
    if(v[a][b]!=temp) return false;
    a++;
    b++;
}
        }
        
        return true;
        
    }
};
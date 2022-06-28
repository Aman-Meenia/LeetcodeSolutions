class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int k) {
    int n=mat.size();
        int m=mat[0].size();
vector<vector<int> > v(n,vector<int> (m));
        for(int i=0; i<n; i++){
            int sum=0;
            v[i][0]=mat[i][0];
            for(int j=1; j<m; j++){
                v[i][j]=v[i][j-1]+mat[i][j];            }
        }
        
        vector<vector<int> > right(n,vector<int> (m));
        for(int j=0; j<m; j++){
            int sum=0;
            right[0][j]=mat[0][j];
            for(int i=1; i<n; i++){
                right[i][j]=right[i-1][j]+mat[i][j];            }
        }
        
        // for(auto a:right){
        //     for(auto b:a){
        //         cout<<b<<" ";
        //     }cout<<endl;
        // }
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
            

// funtion 
int a=i;
int b=j;

int sum=mat[i][j];
if(sum<=k){

int x=a;
int y=b+1;

int x1=a+1;
int y1=b+1;
int temp=1;
    cout<<" sum "<<sum<<endl;
while(x>=0 && y>=0 && x<n && y<m && x1>=0 && y1>=0 && x1<n && y1<m &&sum<=k){

ans=max(ans,temp);
    
// for up to down
int totalright=right[x1][y1];
int sum1=0;


if(a>0){
sum1=totalright-right[x-1][y];

}else{

sum1=totalright;

}

// for left to right 
int totalleft=v[x1][y1];
int sum2=0;

if(b>0){
sum2=totalleft-v[x1][b-1];
}else{
    sum2=totalleft;
}


sum+=sum1+sum2-mat[x1][y1];
    if(sum<=k){
        temp+=1;
        ans=max(ans,temp);
        // cout<<" temp "<<temp<<endl;
    }
    // cout<<" sum is s   "<<sum <<endl; 
  x=a;
    y=y+1;

    x1=x1+1;
    y1=y1+1;
 




}




}
                
            }
        }
        
        
  return ans;      
    }
};
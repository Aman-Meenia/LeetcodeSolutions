class Solution {
public:
    int numSubmat(vector<vector<int>>& matrix) {
               
        int n=matrix.size();
        int m=matrix[0].size();
       
        vector<vector<int> > v(n,vector<int> (m));
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=m-1; j>=0; j--){
                if(matrix[i][j]==1){
                    count++;
                }else{
                    count=0;
                }
                v[i][j]=count;
                
                
            }
        }
        // for(auto a:v){
        //     for(auto b:a){
        //         cout<<b<<" ";
        //     }cout<<endl;
        // }
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int temp=INT_MAX;
                for(int k=i; k<n; k++){
                    temp=min(temp,v[k][j]);
                      ans+=temp;

                }
                                  
            }
        }
        
return ans;
    }
};
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num = 1;
        vector<vector<int>> v(n,vector<int>(n));
        int left = 0;
        int right = n-1;
        int up = 0;
        int down =n-1;
        int cnt=0;
        // cout<<" up "<<up<<endl;
        while(left <= right && up <= down ){
            if(cnt==0){
                for(int i=left; i<=right; i++){
                
                    v[up][i]=num;
                    
                    num+=1;
                }
                up++;
            }else if(cnt==1){
              
                for(int i=up; i<=down; i++){
 
                    v[i][right]=num;
                    num++;
                }
                right--;
            }else if(cnt==2){
                for(int i=right; i>=left; i--){
            
                    v[down][i]=num;
                    num++;
                }
                down--;
            }else{
                for(int i=down; i>=up; i--){
                    v[i][left]=num;
                    num++;
                }
                left++;
                
            }
            cnt+=1;
            cnt%=4;
        }
        return v;
    }
};
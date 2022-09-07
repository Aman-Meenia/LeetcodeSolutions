class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<int> ans;
        ans.push_back(v[0][0]);
int t = (n+m)-1;
        int x = 0;
        int y = 0;
        int k =0;

        while(k<t){
            
           if(k%2==0){

if(y<m-1){
    y++;
}else{
    x++;
}

       while(x>= 0 && y>=0 && x<n && y<m){

           ans.push_back(v[x][y]);
           int a = x+1;
           int b = y-1;

           if(a>= 0 && b>=0 && a<n && b<m){
               x+=1;
               y-=1;
           }else{

break;
           }

       }        

               
               
               
           }else{
               


               if(x<n-1) x++;
               else y++;

                while(x>= 0 && y>=0 && x<n && y<m){
           ans.push_back(v[x][y]);
int a = x-1;
                    int b = y+1;
                    if(a>= 0 && b>=0 && a<n && b<m){
                           x-=1;
           y+=1; 
                    }else{
                        break;
                    }
       
       }
         
           } 
            k++;
        }
        return ans;
    }
};
class Solution {
public:
    
    bool insidecircle(int x , int y , int radius, int a , int b){
        if((a-x)*(a-x)+(b-y)*(b-y)<=radius*radius){
            return true;
        }
        return false;
    }
    
    

 
    
    
    bool checkOverlap(int radius, int x, int y, int x1, int y1, int x2, int y2) {
        
        // cout<<"AMAN "<<endl;
        for(int i=x1; i<=x2; i++){
            for(int j=y1; j<=y2; j++){

                if(insidecircle(x,y,radius,i,j)){
                    cout<<" i "<<i<<" j is  "<<j<<endl;
                    return true;
                }
                
                
            }
        }
        return false;
    }
    
};
class Solution {
public:
    
    vector<int> ans; 
    void fun( int lastelement, int minimum , int maximum, int temp,int k  ){
        if(temp>= minimum && temp<=maximum){
            ans .push_back(temp);
            return ;
        }else if(temp>maximum) return ;
       
        
        for(int i=0; i<=9; i++){
       if(abs(lastelement-i)==k){
           temp=temp*10+i;
           fun(i,minimum,maximum,temp,k);
           temp=temp/10;
       }
        }
        
        
        
    }
    
    
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        int minimum=1;
        int maximum=9;
for(int i=0; i<n-1; i++){
    minimum*=10;
    maximum*=10;
    maximum+=9;
    
    
}
     
        for(int i=1; i<=9; i++){
            fun(i,minimum,maximum,i,k);
        }
        
        
        return ans;
    }
};
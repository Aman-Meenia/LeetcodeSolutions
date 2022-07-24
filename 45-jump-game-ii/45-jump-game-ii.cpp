class Solution {
public:
    int jump(vector<int>& v) {
      int n = v.size();  
       
        int maxrange=0;
        int cnt=0;
        int end=0;
        if(n==1){
            return 0;
        }
        for(int i=0; i<n-1; i++){
            maxrange=max(maxrange,i+v[i]);
            if(i==end){
cnt+=1;
    end=maxrange;   
}
    
        }
               
        return cnt;
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int a =INT_MAX, b; 
        int n=v.size();
        int cnd=1;
        for(int i=0; i<n; i++){
            if(v[i]==target&& cnd==1 ){
                cnd=0;
                a=i;
                b=i;
            }else if(cnd==0 && v[i]==target){
                b=i;
            }else if(cnd==0){
                return {a,b};
            }
        }
        if(a!=INT_MAX) return {a,b};
        return {-1,-1};
    }
};
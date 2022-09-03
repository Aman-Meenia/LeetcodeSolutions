class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& v, vector<int>& target) {
        int n = v.size();
        vector<int> t(3,0);
        for(int i=0; i<n; i++){
if(v[i][0]<=target[0] && v[i][1]<=target[1] && v[i][2]<=target[2]){
t[0]=max(t[0],v[i][0]);
    t[1]=max(t[1],v[i][1]);
    t[2]=max(t[2],v[i][2]);
    
}
            
            
        }
       
        if(t==target){
            return true;
        }
        return false;
        
    }
};
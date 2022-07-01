class Solution {
public:
    
    
bool fun(vector<int> &v, int start){
    if(start<0 || start>=v.size()||v[start]<0) return false;
    if(v[start]==0){
return true;
        }
        int t=v[start];
    v[start]=-1;
    return fun(v,start-t)||fun(v,start+t);
}

    
    bool canReach(vector<int>& v, int start) {
        return fun(v,start);
    }
};
class Solution {
public:
    bool canBeIncreasing(vector<int>& v) {
        int n = v.size();
        int cnt = 0;
        for(int i=1; i<n; i++){
            if(v[i-1]>=v[i]){
                if(cnt==1) return false;
                if(i>1 && v[i-2]>=v[i]){
                    v[i]=v[i-1];
                }
                cnt++;
            }
        }
        return true;
    }
};
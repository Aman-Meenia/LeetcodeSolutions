class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int t=0;
        for(auto a:v){
            t=t^a;
        }
        return t;
    }
};
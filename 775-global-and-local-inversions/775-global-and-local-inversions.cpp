class Solution {
public:
    bool isIdealPermutation(vector<int>& v) {
       for(int i=0; i<v.size(); i++){
           if(abs(v[i]-i)>1)  return false;
       }
        return true;
    }
};
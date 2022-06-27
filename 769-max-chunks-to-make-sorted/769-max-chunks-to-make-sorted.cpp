class Solution {
public:
    int maxChunksToSorted(vector<int>& v) {
        int maximum=0;
        int count=0;
        int n=v.size();
        for(int i=0; i<n; i++){
          maximum=max(maximum,v[i]);
            if(maximum==i){
                count++;
            }
        }
        return count;
    }
};
class Solution {
public:
    int partitionDisjoint(vector<int>& v) {
      int n = v.size();
        vector<int> left(n);
        int maximum = 0;
        for(int i=0; i<n; i++){
            maximum = max(maximum,v[i]);
            left[i]=maximum;
        }
        int minimum = INT_MAX;
vector<int> right(n);
        for(int i=n-1; i>=0; i--){
            minimum = min(v[i],minimum);
            right[i]=minimum;
        }
        
for(int i=0; i<n-1; i++){
    if(left[i]<=right[i+1]){
        return i+1;
    }
}
        return -1;
    }
};
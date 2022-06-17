class RangeFreqQuery {
public:
    unordered_map<int,vector<int> > m;
    RangeFreqQuery(vector<int>& v) {
    for(int i=0; i<v.size(); i++){
        m[v[i]].push_back(i);
    }    
        
    }
    
    int query(int left, int right, int value) {
        int lower=lower_bound(m[value].begin(),m[value].end(),left)-m[value].begin();
        int upper=upper_bound(m[value].begin(),m[value].end(),right)-m[value].begin();
        
        return upper-lower;
        
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
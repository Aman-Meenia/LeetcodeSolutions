class MapSum {
public:
    unordered_map<string,int> mp;
    MapSum() {
        
    }
    unordered_set<string> temp;
    void insert(string key, int val) {
      mp[key]=val;
    }
    
    int sum(string prefix) {
       int sum=0;
        for(auto x:mp){
            if(x.first.find(prefix)==0){
                sum+=x.second;
            }
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
class TimeMap {
public:
    unordered_map<string, vector<pair<int,string>>>m;
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(m.find(key) != m.end()){
            bool flag = true;
            for(int i = m[key].size()-1; i >= 0; i--){
                if(m[key][i].first <= timestamp){
                    flag = false;
                    return m[key][i].second;
                }
            }
            if(flag ) return "";
        }
        else {
            return "";
        }
        return "";
    }
};
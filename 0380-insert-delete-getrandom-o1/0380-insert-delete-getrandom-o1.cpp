class RandomizedSet {
public:
    vector<int> v;
    unordered_set<int> st;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
    if(st.find(val)==st.end()){
        
st.insert(val);
        v.push_back(val);
        return true;
    }
        

        return false;
        
    }
    
    bool remove(int val) {
            if(st.find(val)!=st.end()){
              
                for(int i=0; i<v.size(); i++){
                    if(v[i]==val){
                        v.erase(v.begin()+i);
                        break;
                    }
                }
auto it = st.find(val);
                st.erase(it);
                
        return true;
    }
        
        return false;
    }
    
    int getRandom() {
               int idx=rand()%(v.size());
     return v[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
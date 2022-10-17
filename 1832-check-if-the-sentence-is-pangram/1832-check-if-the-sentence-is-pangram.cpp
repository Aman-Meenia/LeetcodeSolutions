class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set<char> st;
        for(auto a:s){
            st.insert(a);
        }
        if(st.size()==26) return true;
        
        return false;
    }
};
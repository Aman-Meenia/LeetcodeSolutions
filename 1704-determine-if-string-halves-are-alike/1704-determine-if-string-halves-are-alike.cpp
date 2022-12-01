class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int size = s.size();
        int mid = size/2;
        unordered_set<char> st;
        st.insert('a');
        st.insert('A');
        st.insert('e');st.insert('E');
        st.insert('i');st.insert('I');
        st.insert('o');st.insert('O');
        st.insert('u');st.insert('U');
        
        int cnt1 = 0, cnt2=0;
        for(int i=0; i<mid; i++){
            if(st.count(s[i])) cnt1++;
        }for(int i=mid; i<size; i++){
            if(st.count(s[i])) cnt2++; 
        }
        if(cnt1==cnt2)
        return true;
        return false;
    }
};
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string t1, t2;
        for(auto a:word1){
            t1+=a;
        }

        for(auto a:word2){
            t2+=a;
        }
        return t1==t2;
    }
};
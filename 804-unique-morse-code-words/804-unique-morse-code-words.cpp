class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> temp ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> mp;
        
        
        for(auto a:words){
            string n;
            for(int i=0; i<a.size(); i++){
                int t = a[i] -'a';
                n+=temp[t];
            }
            mp[n]+=1;
        }
        return mp.size();
        
    }
};
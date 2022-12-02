class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        vector<int> cnt1(26,0);
        vector<int> cnt2(26,0);
        
        
        for(auto a:word1){
            v1[a-'a']+=1;
                cnt1[a-'a']=1;
        }
             
        for(auto a:word2){
            v2[a-'a']+=1;
                cnt2[a-'a']=1;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2&&cnt1==cnt2;
    }
};
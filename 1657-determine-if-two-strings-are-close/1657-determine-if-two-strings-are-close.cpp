class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<int,int> mp1;
         unordered_map<int,int> mp2;
        for(auto a:word1){
mp1[a]+=1;
        }
        for(auto a:word2){
mp2[a]+=1;
        }
        
    vector<int> v1;
        vector<int> v2;
        for(auto it :mp1){
            v1.push_back(it.second);
            if(mp2.find(it.first)==mp2.end()) return false;
        }
          for(auto it :mp2){
            v2.push_back(it.second);
                if(mp1.find(it.first)==mp1.end()) return false;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        if(v1==v2) {
            return true;
        }
        cout<<"Aman Meenia "<<endl;
        return false;
        
    }
};
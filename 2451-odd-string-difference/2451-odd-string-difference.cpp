class Solution {
public:
    string oddString(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            vector<int> target;
            for(int k=1; k<words[i].size(); k++){
                int a=words[i][k]-'a';
                int b = words[i][k-1]-'a';
                target.push_back(a-b);
            }
            
            int cnt = 0;
            for(int j=0; j<words.size(); j++){
                if(i==j) continue;
                vector<int> temp;
                for(int k=1; k<words[j].size(); k++){
                int a=words[j][k]-'a';
                int b = words[j][k-1]-'a';
                temp.push_back(a-b);
            }
                
                if(target==temp) cnt++;
            }
            if(cnt==0) return words[i];
            
        }
        return "";
    }
};
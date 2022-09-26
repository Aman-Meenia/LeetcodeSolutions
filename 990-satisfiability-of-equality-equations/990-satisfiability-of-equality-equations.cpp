class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        vector<vector<int>> g(26, vector<int>(26, 0));
        vector<int> cs(26, -1);
        for(int i = 0; i < 26; i++) g[i][i] = 1;
        for(int i = 0; i < equations.size(); i++){
            if(equations[i][1] == '='){
                if(g[equations[i][0]-'a'][equations[i][3] - 'a'] == 2) return false;
                g[equations[i][0]-'a'][equations[i][3] - 'a'] = 1;
                g[equations[i][3]-'a'][equations[i][0] - 'a'] = 1;
                }
            else if(equations[i][1] == '!'){
                if(g[equations[i][0]-'a'][equations[i][3] - 'a'] == 1) return false;
                g[equations[i][0]-'a'][equations[i][3] - 'a'] = 2;
                g[equations[i][3]-'a'][equations[i][0] - 'a'] = 2;
                }
            }
        for(int i = 0; i < cs.size(); i++){
            if(checkMap(g, cs, i, i) == false) return false;
        }
        return true;
        }
    
    bool checkMap(vector<vector<int>>& g, vector<int>& cs, int val, int c){
        cs[val] = c;
        bool result = true;
        for(int i = 0; i < 26; i++){
            if((g[val][i] == 1) && (cs[i] != cs[val])) result = checkMap(g, cs, i, c);
            else if((g[val][i] == 2) && (cs[i] == cs[val])) result = false;
            if(result == false) return false;
        }
        return true;
    }
};

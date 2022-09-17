class Solution {
    struct Node {
        char c;
        int idx = -1;
        array<Node*, 26> children = {nullptr};
        
        Node(char c): c(c) {};
    };
    int empty_idx = -1;
    
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        Node *t = build_trie(words); 
        vector<vector<int>> ans;
        build_answers(t, words, ans);
        return ans;
    }
    
    void build_answers(Node const *trie, vector<string> const &words, vector<vector<int>> &ans) {
        for (int i=0; i<words.size(); i++) {
            // if the prefix can be found and the suffix is a palindrome;
            if (words[i] == "") continue;
            auto t = trie;
            int j = 0;
            for (j=0; j<words[i].size(); j++) {
                if (t->children[words[i][j]-'a'] == nullptr){
                    break;
                };
                t = t->children[words[i][j]-'a'];
                
                if (t->idx != -1) {
                    if (t->idx != i && is_palindrome(words[i].substr(j+1, string::npos))) {
                        ans.push_back({i, t->idx});
                    }
                    if (t->idx == i && empty_idx != -1) {
                        ans.push_back({i, empty_idx});
                        ans.push_back({empty_idx, i});
                    }
                }
            } 
            
            // if the prefix can't be found move on to the next word
            if (j < words[i].size()) continue;
            
            for (auto child : t->children) {
                if (!child) continue;
                
                vector<pair<string, int>> suffixes;
                get_suffixes(child, suffixes);
                for (auto [suffix, idx] : suffixes) {
                    if (is_palindrome(suffix)) {
                        ans.push_back({i, idx});
                    }
                }
            }
        } 
    }
    
    void get_suffixes(Node const *t, vector<pair<string, int>> &suffixes, string const seq = "") {
        if (t->idx != -1) {
            suffixes.emplace_back(seq+t->c, t->idx);
        }
        for (auto child : t->children) {
            if (child) get_suffixes(child, suffixes, seq+t->c); 
        } 
    }
    
    // here we build a prefix tree of reverse words
    Node *build_trie(vector<string> const &words) {
        Node *ret = new Node('#');
        for (int n=0; n<words.size(); n++) {
            auto t = ret;
            if (words[n] == "") {
                empty_idx = n;
                continue;
            }
            for (int i=words[n].size()-1; i>=0; i--) {
                if (t->children[words[n][i]-'a'] == nullptr) {
                    t->children[words[n][i]-'a'] = new Node(words[n][i]);
                }
                if (i == 0) {
                    t->children[words[n][i]-'a']->idx = n;
                } 
                t = t->children[words[n][i]-'a'];
            }
        }
        return ret;
    }
    
    bool is_palindrome(string const s) {
        int i = 0;
        while (i<s.size()/2) {
            if (s[i] != s[(s.size()-1)-i]) return false;
            i++;
        }
        return true;
    }
};
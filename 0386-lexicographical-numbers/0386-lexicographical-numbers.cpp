class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> s;
        for(int i=1; i<=n; i++){
            string t = to_string(i);
            s.push_back(t);
        }
        sort(s.begin(),s.end());
        vector<int> ans;
        for(auto a:s){
            int t = stoi(a);
            ans.push_back(t);
        }
        return ans;
        
    }
};
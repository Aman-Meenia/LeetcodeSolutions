class Solution {
public:
    static int cmp(string &s1, string &s2){
        return s1.size()>s2.size();
    }
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(),cmp);
        // reverse(words.begin(),words.end());
        // for(auto a:words){
        //     cout<<a<<" ";
        // }cout<<endl;
        unordered_set<string> st;
        int ans=0;
        int size=words.size();
        for(int i=0; i<size; i++){
            string t=words[i];
            if(st.find(t)!=st.end()){
                continue;
            }
            reverse(t.begin(),t.end());
            string tt;
            ans+=t.size();
            ans+=1;
            for(int k=0; k<t.size(); k++){
                tt.push_back(t[k]);
                string p=tt;
                reverse(p.begin(),p.end());
                st.insert(p);
            }
            
        }
        return ans;
        
    }
};
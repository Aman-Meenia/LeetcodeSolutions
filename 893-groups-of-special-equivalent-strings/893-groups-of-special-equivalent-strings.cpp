class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        unordered_map<string,int> mp;
        int ans = 0;
        for(auto it: words){
            string a = it;
            string s;
            string t;
            for(int i=0; i<a.size(); i++){
                if(i%2==0){
                    s.push_back(a[i]);
                }else{
                    t.push_back(a[i]);
                }
            }
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            int k = 0;
            int k1 = 0;
                string temp;
            for(int i=0; i<a.size(); i++){
                if(i%2==0){
                    temp.push_back(s[k]);
                    k++;
                }else{
                    temp.push_back(t[k1]);
                    k1++;
                }
            }
            cout<<" temp. "<<temp<<endl;
            mp[temp]+=1;
    
            
           
        }
        return mp.size();
    }
};
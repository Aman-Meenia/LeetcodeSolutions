class Solution {
public:
    string rankTeams(vector<string>& s) {
        
        vector<pair<vector<int>,char> > v(26);
  for(auto a:s){
            
            string t=a;
            for(int i=0; i<t.size(); i++){
                int temp=t[i]-'A';

                // cout<<" tempp is "<<temp<<endl;
                v[temp].first.push_back(i+1);
            }
        }
        char A='A';
        for(int i=0; i<26; i++){
 v[i].second=A;
 A+=1;
        }

// for(auto a:v){
//    cout<<a.second<<endl;
//    for(auto it:a.first){
//     cout<<it<<" ";
//    }cout<<endl;
// }

      for(int i=0; i<v.size(); i++){
          sort(v[i].first.begin(),v[i].first.end());
      }

        sort(v.begin(),v.end());
                string ans;
        for(auto a:v){
            if(a.first.size()>0){
                 ans.push_back(a.second);

            }
}

        return ans;
    }
};
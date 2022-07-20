class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map< char , vector<int> > mp;
        
        for( int i = 0; i < s.size(); i++ ){
            mp[s[i]].push_back(i);
        }
        for( auto it : mp ){
        sort( it.second.begin() , it.second.end() );
        }
            // for( auto it : mp ){
// cout<< " first "<<it.first<<endl;
//             for( auto a:it.second ){
//                 cout<<a<<" ";
//             }cout<<endl;
//         }
        
        int ans = 0;
        for( auto it : words ){
            string temp = it;
            int lastindex = -1;
            int condition = 0;
            for( int i=0; i<temp.size(); i++ ){
               char a = temp[i];
                if( mp.find(a) != mp.end() ){
                   
    auto t = upper_bound(mp[a].begin(),mp[a].end(),lastindex);
                    
                    if(t==mp[a].end()){
                        break;
                    }
                    lastindex=*t;
                                   
                }else{
                    break;
                }
                if( i==temp.size() - 1 ){
                    ans++;
            
                }
            }
      
        }
        return ans;
    }
};
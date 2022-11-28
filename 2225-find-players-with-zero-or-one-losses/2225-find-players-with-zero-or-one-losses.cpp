class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& v) {
        unordered_map<int,int> mp;
         unordered_map<int,int> mp2;
       for(auto a:v){
           mp[a[0]]+=1;
       } 
        for(auto a:v){
            mp2[a[1]]+=1;
        }
        vector<int> temp;
        vector<int> temp2;
        for(auto a:mp){
            // cout<<a.first<<" "<<a.second<<endl;
            if(!mp2.count(a.first)){
                temp.push_back(a.first);
            }
        }
        
        for(auto a:mp2){
            // cout<<a.first<<" "<<a.second<<endl;
            if(a.second==1){
                temp2.push_back(a.first);
            }
        }
        sort(temp.begin(),temp.end());
        sort(temp2.begin(),temp2.end());
        vector<vector<int> > ans;
        ans.push_back(temp);
        ans.push_back(temp2);
        return ans;
        
        
        
    }
};
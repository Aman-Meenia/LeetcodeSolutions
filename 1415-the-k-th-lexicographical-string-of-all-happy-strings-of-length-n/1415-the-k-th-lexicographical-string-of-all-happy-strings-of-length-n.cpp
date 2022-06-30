class Solution {
public:
    vector<string> ans;
void validstring(string &s , string &temp , int n ){
    if(temp.size()>=n){
        ans.push_back(temp);
        return;
    }


for(int i=0; i<3; i++){
if(temp.back()==s[i]) continue;
temp.push_back(s[i]);
 validstring(s,temp,n);
temp.pop_back();
}






}

    
    
    
    
    string getHappyString(int n, int k) {
        string s="abc";
string temp;
validstring(s,temp,n);
sort(ans.begin(),ans.end());
        if(k>ans.size()){
            return "";
            
        }
        return ans[k-1];
    }
};
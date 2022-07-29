class Solution {
public:
    
    bool ispalindrome(int low , int high , string & s){
        while(low<=high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    vector<vector<string> > ans;
    vector<string> temp;
    
    void fun(string & s, int index, string &t){
        if(index==s.size()){

            ans.push_back(temp);
        }
        for(int i=index; i<s.size(); i++){
            t.push_back(s[i]);
            if(ispalindrome(index,i,s)){
                temp.push_back(t);
string tt;
fun(s,i+1,tt);
                temp.pop_back();
            }
            // t.pop_back();
        }
        
    }
    vector<vector<string>> partition(string s) {
        string t;
        fun(s,0,t);
        return ans;
    }
};
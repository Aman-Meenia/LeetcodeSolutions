class Solution {
public:
     vector<vector<string>> ans;
    bool ispalindrome(string&s){
        int size = s.size();
        int low = 0;
int high = size-1;
        while(low<=high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    void fun(string &s , int i , vector<string> t, string  temp){
        if(i>=s.size()){
            if(temp.size()==0){
                ans.push_back(t);
            }
            return ;
        }
        
        for(int k=i; k<s.size(); k++){
            temp.push_back(s[k]);
            if(ispalindrome(temp)){
              t.push_back(temp);
            string ttt="";
                fun(s,k+1,t,ttt);
                t.pop_back(); 

            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string> t;
string temp;
        fun(s,0,t,temp);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
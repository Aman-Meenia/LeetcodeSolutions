class Solution {
public:
    
    
    string t ;
    vector<string> ans;
    void fun(vector<string> & s, string &digits , int index){
    
        if(index>=digits.size()){
            ans.push_back(t);
            return ;
        }
        
        for(int i=0; i<s[digits[index]-'0'].size(); i++){
            // cout<<s[index]<<endl;
            t.push_back(s[digits[index]-'0'][i]);
            fun(s,digits,index+1);
            t.pop_back();
        }
       
        
        
        
    }
    
    
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        vector<string> s(9+1);
        s[2]="abc";
        s[3]="def";
        s[4]="ghi";
        s[5]="jkl";
        s[6]="mno";
        s[7]="pqrs";
        s[8]="tuv";
        s[9]="wxyz";
        
        
        fun(s,digits,0);
        return ans;
    }
};
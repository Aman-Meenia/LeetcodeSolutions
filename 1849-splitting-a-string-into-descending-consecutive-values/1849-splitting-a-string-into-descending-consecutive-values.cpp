#define ll long long 
class Solution {
public:
    int ans = 0;
    void fun(string & s, int n , vector<string> & t){
        if(n==s.size()){
            if(t.size()>=2){
    ans = 1;
            }

            return ;
        }
        
        int size = s.size();
        int tt = n+19;
        string temp;
        for(int i=n; i<min(tt,size); i++){
            if(temp.size()>0){
         ll cnd = stoll(temp);
            if(cnd>10000000000) return;
            }
//             if(t.size()>0 &&t.back()!="1"&&temp.size()==0 && s[i]=='0'){
//                   fun(s,i+1,t);

//             }
            temp.push_back(s[i]);
ll check = stoll(temp);
            if(t.size()==0){
                t.push_back(temp);
                fun(s,i+1,t);
                t.pop_back();
            }else{
                ll previous =stoll(t.back());
                if(check+1==previous){
                     t.push_back(temp);
                fun(s,i+1,t);
                t.pop_back();
                }else if(check>previous){
return;
                }
            }
            
        }
    }
    bool splitString(string s) {
        while(s[0]=='0'){
            s.erase(s.begin()+0);
        }
cout<<s<<endl;
        vector<string> t;
        fun(s,0,t);
       if(ans ==1 ) return true; 
        return false;
    }
};
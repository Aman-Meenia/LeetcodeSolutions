class Solution {
public:
    int maximumSwap(int num) {
        string s =to_string(num);
        int n =s.size();
        cout<<s<<endl;
        for(int i=0; i<n; i++){
               int cnd=0;
            int maximum=s[i]-'0';
            int index=0;
for(int j=i+1; j<n; j++){
   int cnd=0;
    if(s[j]-'0' >= maximum){
       maximum=max(maximum,s[j]-'0');
        index=j;
        }
    }
            if(maximum>s[i]-'0'){
                swap(s[i],s[index]);
                int ans=stoi(s);
                return ans;
              break;  
            }
   
}
        
        
        
        cout<<s<<endl;
int ans=stoi(s);
        return ans;
        
    }
};
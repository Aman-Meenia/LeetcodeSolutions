class Solution {
public:
    int strStr(string s, string t) {
        int n =s.size();
        int m = t.size();
       if(m>n) return -1;

        for(int i=0; i<=n-m; i++){
            int k = i;
            bool cnd = true;

    for(int j=0; j<m; j++){
        if(s[k]==t[j]){
            k++;
        }else{
   
            cnd = false;
                 break;
        }
    }
            cout<<cnd<<endl;
            if(cnd==true){
      
 return i;
            }
        }
        return -1;
  
        
        
        
    }
};
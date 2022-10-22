class Solution {
public:
    string minWindow(string s, string t) {
     unordered_map<char,int> st;
        for(auto a:t){
            st[a]+=1;
        }
               string ss;
        int low = 0 ;
        int high = 0;
        int size = s.size();
   int ans = INT_MAX;
        int temp = 0;
        int n = st.size();
        while(high<size){
            if(st.find(s[high])!=st.end()){
                st[s[high]]-=1;
                if(st[s[high]]==0){
                    temp++;
                }
            }
           
            while(low<high &&st.find(s[low])==st.end() ||st.find(s[low])!=st.end()
                  &&st[s[low]]<0){
     
                if(st.find(s[low])!=st.end()
                  &&st[s[low]]<0){
                st[s[low]]+=1;
                }
                low++;
            }
            
            if(temp==n){

                if(high-low+1<ans){
                ss=s.substr(low,high-low+1);
                    ans = high-low+1;
                }
            }
            
         high++;   
        }
 
        return ss;
        
        
        
    }
};
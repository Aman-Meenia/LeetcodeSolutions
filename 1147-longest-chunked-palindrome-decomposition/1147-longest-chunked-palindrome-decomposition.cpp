class Solution {
public:
    int longestDecomposition(string s) {
        int n = s.size();
        int low = 0;
        int high = n-1;
        string t1 ; 
        string t2 ;
        int cnt = 0;
        while(low<=high){
            
            t1.push_back(s[low]);
            t2.push_back(s[high]);
            string tt = t2;
            reverse(tt.begin(),tt.end());
            // cout<<" t1 "<<t1<<" tt "<<tt<<endl;
            if(low==high) break;
            if(t1==tt){
                cnt+=2;
                t1.clear();
                t2.clear();
            }
            low++;
            high--;

        }
        if(t1.size()>0){
            cnt++;
        }
        return cnt;
        
        
    }
};
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
       
        unordered_set<string> mp;
        for(int i=ax1; i<ax2; i++){
            for(int j=ay1; j<ay2; j++){
                string t=to_string(i);
                string t1=to_string(j);
                t+=t1;
           mp.insert(t);
                // cout<<t<<endl;
                
            }
        }
        
          for(int i=bx1; i<bx2; i++){
            for(int j=by1; j<by2; j++){
                string t=to_string(i);
                string t1=to_string(j);
                t+=t1;
           mp.insert(t);
                // cout<<t<<endl;
            }
        }
        return mp.size();
    }
};
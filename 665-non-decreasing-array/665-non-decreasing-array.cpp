class Solution {
public:
    bool checkPossibility(vector<int>& v) {
        int size=v.size();
        int minimum=v[0];
        int count=0;
        for(int i=1; i<size; i++){
            if(minimum>v[i]){           
                count++;
            }else{
                minimum=v[i];
            }
        }
        if(count<=1){
            return true;
        }
        
        int maximum=v[size-1];
       count=0;
          for(int i=size-2; i>=0; i--){
            if(maximum<v[i]){
                count++;
            }else{
                maximum=v[i];
            }
        }
        // cout<<"count "<<count<<endl;
         if(count<=1){
            return true;
        }
        return false;
        
    }
};
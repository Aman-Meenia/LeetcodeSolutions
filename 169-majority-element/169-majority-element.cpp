class Solution {
public:
    int majorityElement(vector<int>& v) {
     int cnt = 1;
        int n = v.size();
        int num = v[0];
        for(int i=1; i<n; i++){
            if(num==v[i]){
                cnt++;
            }else{
                cnt--;
                if(cnt==0){
                    num=v[i];
                    cnt=1;
                }
            }
        }
        return num;
        
    }
};
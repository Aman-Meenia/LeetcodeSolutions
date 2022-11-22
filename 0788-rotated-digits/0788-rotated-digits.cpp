class Solution {
public:
    int rotatedDigits(int n) {
        int ans = 0;
        for(int i=0; i<=n; i++){
            string t = to_string(i);
            int cnt = 0;
            int cnt2=0;
            for(auto it :t){
                if(it=='2' ||it=='5' ||it==
                  '6' ||it=='9'){
                    cnt++;
                }else if(it=='1'||it=='0'||it=='8'){
                    if(t.size()>1){
                    cnt2++;
                    }
                }
            }
            if(cnt>=1 &&cnt+cnt2==t.size()) ans++;
        }
    return ans;    
    }
};
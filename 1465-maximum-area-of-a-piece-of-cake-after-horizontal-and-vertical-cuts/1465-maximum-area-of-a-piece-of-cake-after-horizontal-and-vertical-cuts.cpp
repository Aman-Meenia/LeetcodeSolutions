#define ll long long 
#define mod 1000000007
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hcuts, vector<int>& vcuts) {
        sort(hcuts.begin(),hcuts.end());
          sort(vcuts.begin(),vcuts.end());
        int height=0;
        int temp=0;
        for(int i=0; i<hcuts.size(); i++){
          int  t=hcuts[i]-temp;

            height=max(height,t);
            temp=hcuts[i];
            if(i==hcuts.size()-1){
                int tt=h-hcuts[i];

                     height=max(height,tt);
            }
        }

        int width=0;
        temp=0;
          for(int i=0; i<vcuts.size(); i++){
           int t=vcuts[i]-temp;
            width=max(width,t);
              
            temp=vcuts[i];
                if(i==vcuts.size()-1){
                int tt=w-vcuts[i];
                     width=max(width,tt);
            }
        }
        // cout<<" height "<<height<<endl;
        // cout<<" width "<<width<<endl;
        ll ans=((ll)width%mod * height%mod)%mod;
        return ans;
        
    }
};
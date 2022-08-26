class Solution {
public:
    int findMinDifference(vector<string>& s) {
        int ans = INT_MAX;
        int n = s.size();
        sort(s.begin(),s.end());
        for(int i=0; i<n-1; i++){
    string t1(s[i].begin(),s[i].begin()+2);
    string t2(s[i].begin()+3,s[i].begin()+5);

      int hour1=stoi(t1);
      int min1=stoi(t2);
            string t3(s[i+1].begin(),s[i+1].begin()+2);

    string t4(s[i+1].begin()+3,s[i+1].begin()+5);

      int hour2=stoi(t3);
      int min2=stoi(t4);
    
            int tt = hour2-hour1;
            tt*=60;
            if(min2>=min1){
                tt+=min2-min1;
            }else{
                tt-=60;
                int p = min2+60;
                p-=min1;
                tt+=p;
            }
            ans = min(ans,tt);
      
        }
        
        
         string t1(s[0].begin(),s[0].begin()+2);
         string t2(s[0].begin()+3,s[0].begin()+5);
            // cout<<" t2 "<<t2<<endl;
      int hour1=stoi(t1);
      int min1=stoi(t2);
        int tempans= hour1*60;
        tempans+=min1;
            string t3(s[n-1].begin(),s[n-1].begin()+2);
     // cout<<" t1 "<<t1<<endl;
    string t4(s[n-1].begin()+3,s[n-1].begin()+5);
            // cout<<" t2 "<<t2<<endl;
      int hour2=stoi(t3);
      int min2=stoi(t4);
        
        int tempans1=hour2*60;
        tempans1+=min2;
        tempans1=(24*60)-tempans1;
        ans=min(ans,tempans+tempans1);
        
        
        
        
        
        
        
        

        return ans;
    }
};
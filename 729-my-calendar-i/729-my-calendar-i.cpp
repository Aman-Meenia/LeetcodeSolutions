class MyCalendar {
public:
    MyCalendar() {
        
    }
      map<int,int> mp;
    bool book(int start, int end) {
        int sum=0;
        mp[start]+=1;
        mp[end]-=1;
        for(auto it:mp){

        sum+=it.second;
            if(sum==2) {
               mp[start]--;
                mp[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
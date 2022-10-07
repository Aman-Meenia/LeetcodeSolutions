class MyCalendarThree {
public:
    map<int, int>mm;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mm[start]++;
        mm[end]--;
        int ans = 0;
        int sum = 0;
        for(auto &i : mm){
            sum+=i.second;
            ans = max(sum, ans);
        }
        return ans;
        
    }
};

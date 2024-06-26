class StockSpanner {
public:
    stack<pair<int,int> > st;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
    int cnt = 0;
        while(!st.empty() && st.top().first<=price){
            cnt+=st.top().second;
            st.pop();
        }
        cnt+=1;
        st.push({price,cnt});
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
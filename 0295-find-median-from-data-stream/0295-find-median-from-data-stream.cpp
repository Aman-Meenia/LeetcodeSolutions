class MedianFinder {
public:
    
priority_queue<int,vector<int> > maxheap;
priority_queue<int,vector<int>,greater<int>>minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxheap.size()==minheap.size()){
            if(maxheap.size()==0){
                maxheap.push(num);
            }else{
                if(maxheap.top()>num){
                               maxheap.push(num);
                }else{
                       minheap.push(num);
                maxheap.push(minheap.top());
                    minheap.pop();
      
                }
            }
        }else if(maxheap.size()>minheap.size()){
                if(maxheap.top()>num){
                    
                    maxheap.push(num);
 minheap.push(maxheap.top());
                    maxheap.pop();
                    // cout<<"Num "<<num<<endl;
             
              
                }else{
                 minheap.push(num);
                // maxheap.push(minheap.top());
                //     minheap.pop();
                //     minheap.push(maxheap.top());
                //     maxheap.pop();
                }
        }
        // cout<<"maxheap.size() "<<maxheap.size()<<"minheap.size() "<<minheap.size()<<endl;
    }
    
    double findMedian() {
        if(maxheap.size()==minheap.size()){
    double ans = maxheap.top()+minheap.top();
            ans = ans /2;
            return ans;
        }else {
            // cout<<"Aman Meenia "<<endl;
            return maxheap.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
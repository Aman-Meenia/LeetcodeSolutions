class MyCircularQueue {
public:
    vector<int> q;
    int size = 0;
    int K =0;
    int start = 0;
    int end = 0;
    MyCircularQueue(int k) {
        K=k;
        q.assign(k,-1);
    }
    
    bool enQueue(int value) {
        if(size<K){
            q[end%K]=value;
            end++;
            size++;
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        
        if(size>=1){
            start++;
            size--;
            return true;
        }
        return false;
    }
    
    int Front() {
        if(size>=1){
            return q[start%K];
        }
        return -1;
        
    }
    
    int Rear() {
        if(size>=1){
        return q[(end-1)%K];
        }
        return -1;
    }
    
    bool isEmpty() {
        if(size==0) return true;
        return false;
    }
    
    bool isFull() {
       if(size==K) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
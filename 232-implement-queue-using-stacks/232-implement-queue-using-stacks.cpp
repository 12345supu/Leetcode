class MyQueue {
public:
    stack<int> a;
    stack<int> b;
    int count=0,m=0;
    MyQueue() {
         
    }
    
    void push(int x) {
        a.push(x);
        count++;
    }
    
    int pop() {
        for(int i=0;i<count;i++)
        {
            int c= a.top();
            a.pop();
            b.push(c);
        }
        m=b.top();
        b.pop();
        count--;
        for(int i=0;i<count;i++)
        {    
            int l=b.top();
            b.pop();
            a.push(l);
        }
        return m;
    }
    
    
    int peek() {
        for(int i=0;i<count;i++)
        {
            int c= a.top();
            a.pop();
            b.push(c);
        }
        m=b.top();
        for(int i=0;i<count;i++)
        {    
            int l=b.top();
            b.pop();
            a.push(l);
        }
        return m;
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
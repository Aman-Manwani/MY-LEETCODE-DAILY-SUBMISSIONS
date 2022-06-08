class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) 
    {
        s1.push(x);
    }
    
    int pop() 
    {
        cout<<s1.size()<<" ";
        if(s1.empty() && s2.empty())
        {
            return 0;
        }else
        if(!s1.empty())
        {
            while(s1.size()!=1)
            {
                s2.push(s1.top());
                s1.pop();
            }
            int x=s1.top();
            s1.pop();
            while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
            return x;
        }
        return 0;
    }
    
    int peek() 
    {
        cout<<s1.size()<<" ";
        if(!s1.empty())
        {
            while(s1.size()!=1)
            {
                s2.push(s1.top());
                s1.pop();
            }
            int x=s1.top();
            s2.push(s1.top());
            s1.pop();
            while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
            cout<<s1.size()<<" ";
            return x;            
        } 
        return 0;
    }
    
    bool empty() 
    {
        if(!s1.empty() || !s2.empty())
        {
            return false;
        }
        return true;
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
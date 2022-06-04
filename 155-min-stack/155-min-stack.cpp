class MinStack {
public:
    stack<pair<int,int>>s;
    MinStack() {
        
    }
    void push(int val)
    {
        if(s.empty() || (!s.empty() && s.top().second>=val))
        {
            s.push({val,val});
        }else
        if(!s.empty() && s.top().second<val)
        {
            s.push({val,s.top().second});
        }
    }
    
    void pop() 
    {
        if(s.empty())
        {
            return;
        }else
            s.pop();    
    }
    
    int top() 
    {
        return s.top().first;
    }
    
    int getMin() 
    {
        return s.top().second;    
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
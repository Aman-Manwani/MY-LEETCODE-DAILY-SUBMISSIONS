class MedianFinder {
public:
    priority_queue<int>leftheap;
    priority_queue<int,vector<int>,greater<int>>rightheap;
    double med=-1;
    MedianFinder() 
    {
            
    }
    void addNum(int num) 
    {
        if(leftheap.empty() && rightheap.empty())
        {
            leftheap.push(num);
            med=num;
        }else
        if(leftheap.size()>rightheap.size())
        {
            if(num<med)
            {
                rightheap.push(leftheap.top());
                leftheap.pop();
                leftheap.push(num);
            }else
            {
                rightheap.push(num);
            }
            med=(double)(leftheap.top()+rightheap.top())/2.0;
        }else
        if(leftheap.size()==rightheap.size())
        {
            if(num<med)
            {
                leftheap.push(num);
                med=leftheap.top();
            }else
            {
                rightheap.push(num);
                med=rightheap.top();
            }
        }else
        {
            if(num>med)
            {
                leftheap.push(rightheap.top());
                rightheap.pop();
                rightheap.push(num);
            }else
                leftheap.push(num);
            med=(double)(leftheap.top()+rightheap.top())/2;
        }
    }
    
    double findMedian() {
        return med;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
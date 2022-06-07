class MyCircularQueue {
    int *arr;
    int ms,cs,r,f;
public:
    MyCircularQueue(int k) 
    {
        int ds=k;
        arr=new int [ds];
        cs=0;
        ms=ds;
        f=0;
        r=ds-1;
    }
    bool isEmpty() {
        return cs==0;
    }
    
    bool isFull() {
        return cs==ms;
    }
    bool enQueue(int value) 
    {
        if(!isFull())
        {
            r=(r+1)%ms;
            arr[r]=value;
            cs++;
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(!isEmpty())
        {
            f=(f+1)%ms;
            cs--;
            return true;
        }
        return false;
    }
    
    int Front() 
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[f];
    }
    
    int Rear()
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[r];
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
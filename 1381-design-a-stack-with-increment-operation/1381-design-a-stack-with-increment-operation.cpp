class CustomStack {
public:
    vector<int>v;
    int k;
    CustomStack(int maxSize) {
        k=maxSize;
    }
    
    void push(int x)
    {
        if(k>v.size())
        {
            v.push_back(x);
        }
    }
    
    int pop() 
    {
        cout<<v.size()<<" ";
        if(v.empty())
        {
            return -1;
        }
        int x=v[v.size()-1];
        v.pop_back();
        return x;
    }
    
    void increment(int k, int val) 
    {
        if(k>=v.size())
        {
            for(int i=0;i<v.size();i++)
            {
                v[i]=val+v[i];
            }
            return;
        }
        for(int i=0;i<k;i++)
        {
            v[i]=val+v[i];
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
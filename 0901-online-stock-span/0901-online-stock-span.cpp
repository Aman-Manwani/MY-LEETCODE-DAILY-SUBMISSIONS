class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int,int>>s;
    int i=0;
    int next(int price) 
    {
        int span;
        
        while(!s.empty() && s.top().second<=price)
        {
            s.pop();
        }
        if(!s.empty())
        {
            int prev_price=s.top().first;
            span=i-prev_price;
        }else
        {
            span=i+1;
        }
        s.push({i,price});
        i++;
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
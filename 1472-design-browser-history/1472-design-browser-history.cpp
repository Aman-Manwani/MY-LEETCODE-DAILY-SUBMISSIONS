class BrowserHistory {
public:
    int index=0;
    vector<string>v;
    BrowserHistory(string homepage)
    {
        v.push_back(homepage);
    }
    
    void visit(string url) 
    {
        if((index+1)<v.size())
        {
            v[index+1] = url;
            for(int i = v.size()-1;i>index+1;i--)
            {
                v.pop_back();
            }
        }else
            v.push_back(url);    
        index++;
    }
    
    string back(int steps)
    {
        cout<<index<<" ";
        if(index-steps<0)
        {
            index = 0 ;
            return v[index];
        }
        index = index - steps;
        return v[index];
    }
    
    string forward(int steps) {
        // return v[0];
        if(index+steps>=v.size())
        {
            index = v.size()-1;
            return v[index];
        }
        index = index + steps;
        return v[index];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
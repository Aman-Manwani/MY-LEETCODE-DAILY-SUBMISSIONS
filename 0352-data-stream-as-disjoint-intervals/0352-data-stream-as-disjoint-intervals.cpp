class SummaryRanges {
public:
    set<int>s;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        s.insert(value);
    }
    
    vector<vector<int>> getIntervals() 
    {
        if(s.empty())
        {
            return {};
        }
        vector<vector<int>>v;
        int left=-1,right=-1;
        for(auto it:s)
        {
            if(left<0)
            {
                left=right=it;
            }else
            if(it==right+1)
            {
                right=it;
            }else
            {
                v.push_back({left,right});
                left=right=it;
            }
        }
        v.push_back({left,right});
        return v;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */
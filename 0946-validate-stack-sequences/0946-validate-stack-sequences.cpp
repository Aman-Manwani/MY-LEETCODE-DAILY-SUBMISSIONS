class Solution {
public:
    // [1,0]
    // [1,0]
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
    {
        stack<int>s;
        int idx=0;
        for(int i=0;i<pushed.size();i++)
        {
            s.push(pushed[i]);
            if(s.top()==popped[idx])
            {
                while(!s.empty() && idx<popped.size() && s.top()==popped[idx])
                {
                    s.pop();
                    idx++;
                }
            }
        }
        if(idx==popped.size())
        {
            return true;
        }
        return false;
    }
};
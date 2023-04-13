class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int>s;
        int j=0;
        for(int i=0;i<pushed.size();i++)
        {
            if(popped[j]==pushed[i])
            {
                j++;
                if(!s.empty() && popped[j]==s.top())
                {
                    while(!s.empty() && popped[j]==s.top())
                    {
                        j++;
                        s.pop();
                    }
                }
            }
            else
            s.push(pushed[i]);
        }
        if(s.empty())
        {
            return true;
        }
        while(j<popped.size())
        {
            if(s.top()==popped[j])
            {
                j++;
                s.pop();
            }else
                break;
        }
        if(s.empty())
        {
            return true;
        }
        else
            return false;
    }
};
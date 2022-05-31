class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        int sum=0;
        stack<int>s;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]!="+" && ops[i]!="C" && ops[i]!="D")
            {
                s.push(stoi(ops[i]));
            }else
            if(ops[i]=="C")
            {
                s.pop();
            }else
            if(ops[i]=="D")
            {
                s.push(2*(s.top()));
            }else
            if(ops[i]=="+")
            {
                int x=s.top();
                int s1=x;
                s.pop();
                s1+=s.top();
                s.push(x);
                s.push(s1);
            }
        }
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};
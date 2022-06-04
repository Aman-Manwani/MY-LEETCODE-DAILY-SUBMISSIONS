class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        int len=temperatures.size();
        vector<int>v(len,0);
        int position=0;
        stack<pair<int,int>>s;
        while(position<len)
        {
            if(s.empty() || (!s.empty() && s.top().second>temperatures[position]))
            {
                s.push({position,temperatures[position]});
            }else
            {
                while(!s.empty() && s.top().second<temperatures[position])
                {
                    v[s.top().first]=position-s.top().first;
                    s.pop();
                }
                s.push({position,temperatures[position]});
            }
            position+=1;
        }
        return v;
    }
};
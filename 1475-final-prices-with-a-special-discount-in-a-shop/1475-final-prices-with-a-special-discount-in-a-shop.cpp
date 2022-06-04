class Solution {
public:
    vector<int> finalPrices(vector<int>& prices)
    {
        stack<pair<int,int>>s;
        vector<int>v=prices;
        int position=0;
        while(position<prices.size())
        {
            if(s.empty() || (!s.empty() && s.top().second<prices[position]))
            {
                s.push({position,prices[position]});
            }else
            {
                while(!s.empty() && s.top().second>=prices[position])
                {
                    v[s.top().first]=s.top().second-prices[position];
                    s.pop();
                }
                s.push({position,prices[position]});
            }
            position+=1;
        }
        return v;
    }
};
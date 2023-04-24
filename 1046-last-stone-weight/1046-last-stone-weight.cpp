class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        int n=stones.size();
        priority_queue<int,vector<int>>pq(stones.begin(),stones.end());
        while(pq.size()>1)
        {
            int a=pq.top();
            pq.pop();
            
            int b=pq.top();
            pq.pop();
            cout<<a<<" "<<b<<" ";
            if(a==b)
            {
                continue;
            }else
            if(a!=b)
            {
                int x=abs(a-b);
                cout<<x<<" ";
                pq.push(x);
            }
        }
        if(pq.empty())
        {
            return 0;
        }
        return pq.top();
    }
};
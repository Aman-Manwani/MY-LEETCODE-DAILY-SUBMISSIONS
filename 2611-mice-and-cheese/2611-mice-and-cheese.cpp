class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<reward1.size();i++)
        {
            pq.push({reward1[i]-reward2[i],i});
        }
        long long int sum = accumulate(reward2.begin(),reward2.end(),0);
        cout<<sum<<endl;
        while(k--)
        {
            int index = pq.top().second;
            sum+=(reward1[index]-reward2[index]);
            pq.pop();
        }
        return sum;
    }
};
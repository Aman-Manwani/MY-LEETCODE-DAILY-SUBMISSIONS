class Solution {
public:
    int countPoints(string rings)
    {
        map<char,set<char>>m;
        for(int i=1;i<rings.size();i=i+2)
        {
            m[rings[i]].insert(rings[i-1]);
        }
        int count=0;
        for(auto it:m)
        {
            cout<<it.second.size()<<" ";
            if(it.second.size()==3)
            {
                count++;
            }
        }
        return count;
    }
};
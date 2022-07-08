class Solution {
public:
    int maxNumberOfBalloons(string s)
    {
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int mini=INT_MAX;
        mini=min(mini,m['b']);
        mini=min(mini,m['a']);
        mini=min(mini,(m['l'])/2);
        mini=min(mini,(m['o'])/2);
        mini=min(mini,m['n']);
        return mini;
    }
};
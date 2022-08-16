class Solution {
public:
    int firstUniqChar(string s) 
    {
        queue<char>q;
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++)
        {
            q.push(s[i]);
            int num=s[i]-'a';
            v[num]++;
        }
        for(int i=0;i<s.size();i++)
        {
            int comp=q.front()-'a';
            if(v[comp]==1)
            {
                return i;
            }
            q.pop();
        }
        return -1;
    }
};
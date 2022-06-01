class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string>s;
        int i=1;
        int j=0;
        while(i!=target[target.size()-1])
        {
            if(i==target[j])
            {
                s.push_back("Push");
                i++;
                j++;
            }else
            {
                s.push_back("Push");
                s.push_back("Pop");
                i++;
            }
        }
        s.push_back("Push");
        return s;
    }
};
class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string>v;
        string temp="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(temp!=" ")
                    v.push_back(temp);
                temp="";
            }else
                temp+=s[i];
            if(i==s.length()-1)
            {
                v.push_back(temp);
            }
        }
        temp="";
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i].length()==0)
            {
                continue;
            }
            temp+=v[i];
            temp+=' ';
        }
        temp.pop_back();
        return temp;
    }
};
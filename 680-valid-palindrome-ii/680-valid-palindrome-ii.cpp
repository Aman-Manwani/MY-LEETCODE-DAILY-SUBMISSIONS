class Solution {
public:
    bool ispalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) 
    {
        int i=0;
        int j=s.size()-1;
        int cmp=0;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                if(ispalindrome(s,i,j-1) || ispalindrome(s,i+1,j))
                {
                    return true;
                }else
                    return false;    
            }
            i++;
            j--;
        }
        return true;
    }
};
char keypad[][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
public:
    vector<string> letterCombinations(string digits) 
    {
        vector<string>v;
        if(digits.length()==0)
        {
            return v;    
        }
        string s="";
        ans(v,s,digits,0,0);
        return v;
    }
    void ans(vector<string>&v,string s,string digits,int i,int j)
    {
        //base case
        if(i==digits.length())
        {
            s+='\0';
            v.push_back(s);
            return;
        }
        //rec case
        int digit=digits[i]-'0';
        for(int k=0;keypad[digit][k]!='\0';k++)
        {
            ans(v,s+keypad[digit][k],digits,i+1,j+1);
        }
        return;
    }
};
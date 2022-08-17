class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& nums) 
    {
        unordered_set<string>s;
        vector<string>temp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char,string>m;
        for(char i='a';i<='z';i++)
        {
            m[i]=temp[i-'a'];
        }
        cout<<m.size();
        string ans="";
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                ans+=m[nums[i][j]];
            }
            s.insert(ans);
            ans="";
        }
        return s.size();
    }
};
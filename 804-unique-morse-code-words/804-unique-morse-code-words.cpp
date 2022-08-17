class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& nums) 
    {
        unordered_set<string>s;
        vector<string>temp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string ans="";
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                ans+=temp[nums[i][j]-'a'];
            }
            s.insert(ans);
            ans="";
        }
        return s.size();
    }
};
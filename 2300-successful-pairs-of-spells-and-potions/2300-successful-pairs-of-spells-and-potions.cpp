class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
        sort(potions.begin(),potions.end());
        
        vector<int>v;
        for(int i=0;i<spells.size();i++)
        {
            long long int numFind = ceil((1.0 * success) / spells[i]);
            int index_find = lower_bound(potions.begin(),potions.end(),numFind)-potions.begin();
            v.push_back(potions.size()-index_find);
        }
        return v;
    }
};
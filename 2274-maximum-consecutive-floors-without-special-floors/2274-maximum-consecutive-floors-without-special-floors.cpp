class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) 
    {
        if(special.size()==1)
        {
            return max(special[0]-bottom,top-special[0]);
        }
        sort(special.begin(),special.end());
        int maxi=*max_element(special.begin(),special.end());
        int mini=*min_element(special.begin(),special.end());
        int max_diff=0;
        for(int i=0;i<special.size()-1;i++)
        {
            if(special[i+1]-special[i]>max_diff)
            {
                max_diff=special[i+1]-special[i];
            }
        }
        return max(mini-bottom,max(top-maxi,max_diff-1));   
    }
};
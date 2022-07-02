class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
        horizontalCuts.push_back(0);horizontalCuts.push_back(h);
        verticalCuts.push_back(0);verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long int hori_max=0;
        long long int ver_max=0;
        for(int i=0;i<horizontalCuts.size()-1;i++)
        {
            if(horizontalCuts[i+1]-horizontalCuts[i]>hori_max)
            {
                hori_max=horizontalCuts[i+1]-horizontalCuts[i];
            }
        }
        for(int i=0;i<verticalCuts.size()-1;i++)
        {
            if(verticalCuts[i+1]-verticalCuts[i]>ver_max)
            {
                ver_max=verticalCuts[i+1]-verticalCuts[i];
            }
        }
        return (hori_max*ver_max) % 1000000007;
    }
};
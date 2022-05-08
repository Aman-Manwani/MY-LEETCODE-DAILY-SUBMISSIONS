class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices)
    {
        vector<int>v;
        if(tomatoSlices%2==1)
        {
            return v;
        }
        int a=(tomatoSlices-(cheeseSlices*2))/2;
        int b=cheeseSlices-a;
        if(a<0 ||b<0)
        {
            return v;
        }
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};
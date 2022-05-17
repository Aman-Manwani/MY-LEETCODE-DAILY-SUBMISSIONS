class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int ans=0;
        int temp=capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(capacity>=plants[i])
            {
                capacity=capacity-plants[i];
                ans++;
            }else
            if(capacity<plants[i])
            {
                ans=ans+i+i+1;
                capacity=temp-plants[i];
            }
        }
        return ans;
    }
};
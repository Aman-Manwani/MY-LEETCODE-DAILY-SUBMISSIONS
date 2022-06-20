class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        int i=0,j=0,sum=0;
        double maximum=INT_MIN;
        while(j-i+1<=k)
        {
            sum+=nums[j];
            j++;
        }
        j--;       
        double avg;
        avg=(double)sum/k;
        if(avg>maximum)
        {
            maximum=avg;
        }
        while(j+1<nums.size())
        {
            j++;
            sum+=nums[j]-nums[i];
            i++;
            avg=(double)sum/k;
            if(avg>maximum)
            {
                maximum=avg;
            }
        }    
        return maximum;
    }
};
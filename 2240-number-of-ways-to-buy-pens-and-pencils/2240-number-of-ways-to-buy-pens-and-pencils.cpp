class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2)
    {
        long long int ways=0;
        int n=total/cost1;
        for(int i=0;i<=total;i=i+cost1)
        {
            ways=ways+((total-i)/cost2)+1;
        }
        return ways;
    }
};
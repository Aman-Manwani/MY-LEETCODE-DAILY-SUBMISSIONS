class Solution {
public:
    int ans(int i,int n,string temp)
    {
        //base case
        if(n==0)    return 1;
        if(i>=5)    return 0;
        //rec case
        // pick
        int pick = ans(i,n-1,temp);
        //not pick
        int not_pick = ans(i+1,n,temp);
        return pick + not_pick;
    }
    int countVowelStrings(int n) 
    {
        string temp="aeiou";
        return ans(0,n,temp);
    }
};
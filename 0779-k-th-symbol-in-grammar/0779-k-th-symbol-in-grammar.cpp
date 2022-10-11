class Solution {
public:
    int kthGrammar(int n, int k) {
        //base case
        if(n==1)
        {
            return 0;
        }
        int midDLE=pow(2,n-1)/2;
        if(midDLE>=k)
        {
            return kthGrammar(n-1,k);
        }else
            return (!kthGrammar(n-1,k-midDLE));
    }
};
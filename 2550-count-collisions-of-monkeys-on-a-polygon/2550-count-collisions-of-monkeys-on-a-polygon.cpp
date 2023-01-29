class Solution {
public:
    int modulo=1e9+7;
    long long fastpow(long long n, long long x, long long m)
    {
        long long ret = 1;
        while(x)
        {
            if(x&1)
            (ret*=n)%=m;
            x>>=1;
            (n*=n)%=m;
        }
        return ret;
    }
    int monkeyMove(int n) {
        long long int ans = fastpow(2,n,modulo);
        return (ans-2+modulo)%modulo;
    }
};
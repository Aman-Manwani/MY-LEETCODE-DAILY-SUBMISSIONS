#define ll long long
ll mod=1e9+7;
ll dp[1001][1001];
class Solution {
    int sz,K;
    ll solve(int i,ll sum1,vector<int>&v){
        
        if(sum1>=K){
            return 0;
        }
        if(i==sz){
            return sum1<K;
        }
        if(dp[i][sum1]!=-1)return dp[i][sum1];
        
        ll ans=((solve(i+1,sum1+v[i],v)%mod)+(solve(i+1,sum1,v)%mod))%mod;
        return dp[i][sum1]=ans;
    }
public:
    int countPartitions(vector<int>& nums, int k) {
        
        ll tot=1;  // total ways of partitioning the array into two partitions
        K=k;
        sz=nums.size();
        ll  sum=0;
        for(int i=0;i<sz;i++){
            sum+=nums[i];
            tot=(tot*2LL)%mod;
        }
        if(sum<2*k){
            return 0;
        }
        for(int i=0;i<sz;i++){
            for(int j=0;j<k;j++){
                dp[i][j]=-1;
            }
        }
        ll count=solve(0,0,nums)%mod;
        count=count*2LL%mod;   // taking (2) and (3)
        ll res=(tot-count+mod)%mod;
        return res;
    }
};
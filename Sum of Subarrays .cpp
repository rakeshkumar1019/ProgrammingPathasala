//time O(n)
//space O(1)

class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
       long long int mod=1000000000+7;
       if(n<=0)return 0;
       long long int res=0;
       for(int i=0;i<n;i++){
          long long contribution=((a[i])%mod*(i+1)%mod*(n-i)%mod)%mod;
          res=(res%mod+contribution%mod)%mod;
       }
       return res;
    }
};

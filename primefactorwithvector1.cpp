#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define n 1000000
using namespace std;

vector<int> prime;
bool isprime[n];
void seive()
{
    ll sq=sqrt(n);
    isprime[2]=0; //as 0 indicates prime
    for(ll i=4;i<=n;i+=2) isprime[i]=1;
    for(ll i=3;i<=sq;i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)isprime[j]=1;
        }
    }
    prime.pb(2);
    for(ll i=3;i<=n;i+=2)
    {
        if(isprime[i]==0)
        {
          prime.pb(i);
        }
    }

    /*for(long long i=0;i<j;i++)
    {
        cout<<prime[i]<<endl;
    }*/

}
int main()
{

    seive();
    ll x;
    while(1)
    {
        scanf("%lld",&x);
        if(x<0) return 0;

        for(int i=0;i<prime.size();i++)
         {
            if (x%prime[i]==0)
            {
                while (x%prime[i] == 0)
                {
                    printf("    %d\n", prime[i]);
                    x /= prime[i];
                }
            }

        }
        if (x>1) printf("    %lld\n", x);
        printf("\n");
    }
}


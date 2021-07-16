#include<bits/stdc++.h>
using namespace std;
#define N 47000
#define ll long long
bool isprime[N];
ll prime[N],l=0;
void sieve()
{
    prime[l++]=2 ;
    ll i,j ;
    isprime[2]=0; //0 indicates prime
    for(j=4;j<N;j+=2) isprime[j]=1;
    for(i=3;i<N;i+=2)
    {
        if(isprime[i]==0)
        {
            prime[l++] = i ;
            for(j=i*i;j<N;j+=i) isprime[j] =1;
        }
    }
}
bool isitprime(ll n)
{
    if(n<N) return !isprime[n];
    else
        {
        for(int i=0;i<l;i++)
        {
            if(n%prime[i]==0) return false;
        }
        }
    return true;
}



int main()
{
    sieve();

    ll l,h,i;
    while(cin>>l>>h)
    {
        ll a,b,c,d;
        ll low_distance=-1,high_distance=-1;
        ll prev_prime=-1;
        for(i=l;i<=h;i++)
        {
            if(isitprime(i))
            {
                if(prev_prime!=-1)
                {
                    if(low_distance==-1 || i-prev_prime<low_distance)
                    {
                        a=prev_prime,b=i;
                        low_distance=i-prev_prime;
                    }

                    if(high_distance==-1 || i-prev_prime>high_distance)
                    {
                        c=prev_prime,d=i;
                        high_distance=i-prev_prime;
                    }
                }

                 prev_prime=i;

            }


        }

        if(low_distance!=-1)
        {
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",a,b,c,d);
        }
        else
        {
            printf("There are no adjacent primes.\n");
        }
    }
    return 0;
}

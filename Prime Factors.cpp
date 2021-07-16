#include<bits/stdc++.h>
const int n = 1111111;
#define ll long long
using namespace std;

bool isprime[n];
ll prime[n],j;
void sieve()
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

    ll j=0;
    for(ll i=2;i<=n;i++)
    {
        if(isprime[i]==0)
        {
            prime[j]=i;
            j++;
        }
    }

    /*for(long long i=0;i<j;i++)
    {
        cout<<prime[i]<<endl;
    }*/



}
vector<ll> pfactor;

void generator(ll a)
{
   ll sqr=sqrt(a);
   int f=0;
   for(ll i=0;prime[i]<=sqr;i++)
   {
       if(a%prime[i]==0)
           {
               pfactor.push_back(prime[i]);
               while (a % prime[i] == 0)
                {
                    printf("%lld\n",prime[i]);
                    a/= prime[i];

	            }

	        }

   }

   if (a>1)
    {
        pfactor.push_back(a);
       printf("%lld",a);
    }
    printf("\n");

}

int gen(int p,int na) ///how many prime factors of a number
{
   int c=0;
   int x=p;
   while(x<=na)
   {
       c+=(na/x);
       x*=p;
   }
   return c;
}

 /// not acceptable while number is 10^7


void primeFactors(ll n)
{
    // Print the number of 2s that divide n
    if(n%2==0)
    {

    pfactor.push_back(2);
    while (n % 2 == 0)
    {

       // cout << 2 << " ";
        n = n/2;
    }
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        if(n%i==0)
        {

        pfactor.push_back(i);
        while (n % i == 0)
        {
           // cout << i << " ";
            n = n/i;
        }

        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        {
            pfactor.push_back(n);
            //cout << n << " ";
        }
}

int main()
{
    sieve();
      ll  x,i;
    while(1)
    {
        pfactor.clear();


        scanf("%lld",&x);
        if(x<0) return 0;


        generator(x);

    }
}

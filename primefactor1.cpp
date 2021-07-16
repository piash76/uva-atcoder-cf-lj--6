#include<bits/stdc++.h>
#define n 1000000
using namespace std;

bool isprime[1000000];
long long prime[1000000],j;

int sieve()
{

    long long sq=sqrt(n);
    isprime[2]=0; //as 0 indicates prime
    for(long long i=4;i<=n;i+=2) isprime[i]=1;
    for(long long i=3;i<=sq;i+=2)
    {
        if(isprime[i]==0)
        {
            for(long long j=i*i;j<=n;j+=i)isprime[j]=1;
        }
    }

    long long j=0;
    for(long long i=2;i<=n;i++)
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
int main()
{

    sieve();
    long long a;
    while(cin>>a)
        {
            if(a==0) return 0;

        cout<<a<<" = ";
        long long f=1;
        if(a<0)
            cout<<-1,f=0,a*=-1;
        for(long long i=0;prime[i]<=sqrt(a)+1;i++)
            {
            if(a%prime[i]==0)
            {
                while(a%prime[i]==0)
                {

                if(f)
                {

                    cout<<prime[i],f=0;
                }
                else
                {

                    cout<<" x "<<prime[i];
                }
                a/=prime[i];
              }
            }

        }
        if(a>1)
            if(f)
                cout<<a;
            else
                cout<<" x "<<a;
        cout<<endl;
    }
}

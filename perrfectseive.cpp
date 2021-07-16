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
    int a;
    cin>>a;

    if(isitprime(a))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"not"<<endl;
    }
    return 0;
}


///normal phi

ll phi(ll n)
{
    ll result = n;
    for (ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if(n > 1)
        result -= result / n;
    return result;
}



/// phi for big number
///O(nloglogn)

const int N=3000000;
ll phi[M+2];



void calculatePhi()
{
    for(ll i=2; i<=M; i++)
        phi[i] = i;

    for(ll i =2; i<=M; i++)
    {
        if(phi[i]==i)
        {
            for(ll j=i; j<=M; j+=i)
                phi[j]-=phi[j]/i;
        }
    }
}


ll phisum(ll n)
{
    ll phisum=(n*phi(n))/2; ///sum of numbers which are co prime to n
}



#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MAX = 100001;


vector<ll> p;


void sieve()
{
    ll isPrime[MAX+1];

    for (ll i = 2; i<= MAX; i++)
    {

        if (isPrime[i] == 0)
        {

            p.push_back(i);


            for (ll j = 2; i * j<= MAX; j++)
                isPrime[i * j]= 1;
        }
    }
}

ll phi(ll n)
{
    ll res = n;


    for (ll i=0; p[i]*p[i] <= n; i++)
    {
        if (n % p[i]== 0)
        {

            res -= (res / p[i]);


            while (n % p[i]== 0)
               n /= p[i];
        }
    }

    if (n > 1)
       res -= (res / n);

    return res;
}

// Driver code
int main()
{
    // preprocess all prime numbers upto 10 ^ 5
    sieve();
    ll n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        if(n==1) cout<<0<<endl;
        else
        {
            cout<<phi(n)<<endl;
        }

    }

    return 0;
}



///sieve phi for sieve phi (most efficient)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

unsigned long long int phi[5000005];
int mark[5000005];

ll sum[5000005];

void seivePhi()
{
    for(int i=2; i<=5000002; i++) phi[i] = i;
    for(int i=2; i<=5000002; i++)
        if(!mark[i])
            for(int j=i; j<=5000002; j+=i)
            {
                mark[j] = 1;
                phi[j] = phi[j]/i * (i-1);
            }
    for(long long int i=3; i<5000002; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }

}
int main()
{
    seivePhi();
    int tst;
    unsigned long long int ans, a, b;
    scanf("%d", &tst);
    for(int i=1; i<=tst; i++)
    {
        scanf("%llu%llu", &a, &b);
        ans = phi[b] - phi[a-1];
        printf("Case %d: %llu\n", i, ans);
    }
    return 0;
}


/// sieve phi


#include<iostream>
#include<cstdio>

#define M 5000000

using namespace std;

int phi[M+2];

unsigned long long sum[M+2];

void calculatePhi()
{
    for(int i=2; i<=M; i++)
        phi[i] = i;

    for(int i =2; i<=M; i++)
    {
        if(phi[i]==i)
        {
            for(int j=i; j<=M; j+=i)
                phi[j]-=phi[j]/i;
        }
    }
}

void calculatesum()
{
    sum[1] = 0;

    for(int i=2; i<=M; i++)
    {
        sum[i] = phi[i];
        sum[i]*=phi[i];
        sum[i]+=sum[i-1];
    }

}


int main()
{

    int test,a,b,result;

    calculatePhi();

    calculatesum();

    scanf("%d",&test);

    for(int i=1; i<=test; i++)
    {
        scanf("%d%d",&a,&b);

        printf("Case %d: %llu\n",i,sum[b]-sum[a-1]);
    }

    return 0;
}

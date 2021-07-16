#include<bits/stdc++.h>
using namespace std;
#define N 47000
#define ll long long int
bool isPrime[N];
ll prime[N],l;
void Prime(){
    prime[l++] = 2 ;
    long long i,j ;
    isPrime[0] = isPrime[1] = true;
    for(j=4;j<N;j+=2) isPrime[j] = true ;
    for(i=3;i<N;i+=2)
    {
        if(isPrime[i]==false)
        {
            prime[l++] = i ;
            for(j=i*i;j<N;j+=i) isPrime[j] = true ;
        }
    }
}
bool isprime(ll n){
    if(n<N) return !isPrime[n];
    else{
        for(int i=0;i<l;i++){
            if(n%prime[i]==0) return false;
        }
    }
    return true;
}
int main()
{
    ll n,m,close,distant,p1,p2,p3,p4,i,last; Prime();
    while(scanf("%lld %lld",&n,&m)!=EOF){
        close = INT_MAX; distant = INT_MIN; last = -1;
        bool f=true;
        for(i=n;i<=m;i++){
            if(isprime(i)){
                if(last == -1) last=i;
                else{
                    if(i-last < close){
                        close = i-last;
                        p1 = last, p2 = i;
                    }
                    if(i-last > distant){
                        distant = i-last;
                        p3 = last; p4 = i;
                    }
                    last = i;
                    f = false;
                }
            }
        }
        if(f) printf("There are no adjacent primes.\n");
        else printf("%lld,%lld are closest, %lld,%lld are most distant.\n", p1, p2, p3, p4);
    }
}

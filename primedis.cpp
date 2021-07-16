#include<bits/stdc++.h>
#define ll long long
#define N 10000000
using namespace std;

vector<int> prime;
vector<bool> isprime(N+1,true);
void sieve()
{


   for(int i = 2; i * i <= N; ++i)
   {
      if(isprime[i])
      {
         for(int j = i * 2; j <= N; j += i)
         {
            isprime[j] = false;
         }
      }
   }

   for(int i = 2; i <= N; ++i)
   {
      if(isprime[i])
      {
         prime.push_back(i);
      }
   }
}



int main() {
    sieve();
    int L, U;
    while (scanf("%d %d", &L, &U) == 2) {
        pair<long long, long long> close, distant;
        long long close_dist = -1, distant_dist = -1;
        long long prev_prime = -1;
        for (long long i = L; i <= U; i++)
            if (isprime[i]==0) {
                if (prev_prime != -1) {
                    if (close_dist == -1 || i - prev_prime < close_dist) {
                        close = {prev_prime, i};
                        close_dist = i - prev_prime;
                    }
                    if (distant_dist == -1 || i - prev_prime > distant_dist) {
                        distant = {prev_prime, i};
                        distant_dist = i - prev_prime;
                    }
                }
                prev_prime = i;
            }
        if (close_dist != -1)
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",
                close.first, close.second, distant.first, distant.second);
        else
            printf("There are no adjacent primes.\n");
    }
    return 0;
}

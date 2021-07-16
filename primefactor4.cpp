#include<bits/stdc++.h>
using namespace std;
#define mx 10000010
#define ll long long
bool flag[mx];
int primes[mx];
int seive(int n)
{
int sq=sqrt(n);
flag[1]=1;
for(int i=4;i<=n;i+=2)flag[i]=1;
for(int i=3;i<=sq;i+=2){
if(flag[i]==0){
for(int j=2*i;j<=n;j+=i)
flag[j]=1;
}
}
int count=0;

for(int i=1;i<=n;i++){
if(flag[i]==0)count++;
}
 return count;
}

int main()
{
    ll x,i,c,t,k;
    cin>>t;
    while(t--)
    {

        cin>>x;
        k=seive(x);
        if(flag[x]==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(x-1-k)<<endl;
        }
    }
}

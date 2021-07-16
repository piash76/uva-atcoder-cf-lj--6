#include<bits/stdc++.h>
#define godspeed() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    godspeed()

    ll i,n,m,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        printf("Case %lld: %lld\n",i,(n*m)/2);
    }

   return 0;

}


///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=500005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,s;cin>>n>>s;
        ll sm=0;
        for(i=1;i<=n;i++)
        {
            ll v,f,c;cin>>v>>f>>c;

            if(s*c<=f*v) sm++;

        }

       cout<<sm<<endl;


    }

    return 0;

}
/*

2
3 100
52 75 10
88 13 44
56 9 5
2 920368
950 950 1
943 976 1


*/




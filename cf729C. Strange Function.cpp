
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

const int N=500005;
ll a[N];

ll lcm(ll a,ll b)
{
    return ((a*b)/__gcd(a,b));
}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;

        ll ans=0;

        ll x=n-(n/2);

        ans=(ans+(2*x)%mod)%mod;


        ll prev=n/2;

        ll prev_x=2;

        for(i=3;;i++)
        {
            if(prev==0) break;

            ll new_x=lcm(prev_x,i);

            ll y=(n/new_x);



            ll sm=prev-y;

            ans=(ans+(i*sm)%mod)%mod;


            prev=y;
            prev_x=new_x;
        }


        cout<<ans<<endl;


    }

    return 0;

}





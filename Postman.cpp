

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


ll n,cap;


ll solve(vector<pll> &v)
{
    ll carry=0,s=0,i;

    for(i=v.size()-1;i>=0;i--)
    {
        ll dis=v[i].ff;
        ll letter=v[i].ss;


        if(letter<carry)
        {
            carry-=letter;

        }
        else if(carry==letter)
        {
            carry=0;

        }
        else
        {
            letter-=carry;

            ll turn=(letter+cap-1)/cap;

            s+=(2*turn*dis);

            if(letter%cap)
            {
                ll rem=letter%cap;

                carry=cap-rem;
            }

        }


    }


    return s;



}



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;

    cin>>n>>cap;

    vector<pll> pos,neg;

    for(i=1;i<=n;i++)
    {
        ll x,y;cin>>x>>y; ///position,letter
        if(x<0) neg.push_back({-x,y});
        else pos.push_back({x,y});
    }

    sort(pos.begin(),pos.end());sort(neg.begin(),neg.end());

    ll ans=0;


    if(pos.size()) ans+=solve(pos);
    if(neg.size()) ans+=solve(neg);

    cout<<ans<<"\n";


    return 0;

}

/*


4 10
-7 5
-2 3
5 7
9 5


*/




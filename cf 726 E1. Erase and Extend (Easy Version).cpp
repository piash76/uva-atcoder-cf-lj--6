

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

    ll n,k;cin>>n>>k;
    string s;cin>>s;


    string ans="";
    for(i=0;i<k;i++) ans+=s[0];



    for(i=1;i<=n;i++)
    {
        string st="";
        ll it=0;

        for(j=0;j<k;j++)
        {
            st+=s[it++];
            if(it==i) it=0;

        }
        if(ans>st)
        {
            //cout<<"ANS "<<ans<<endl;
            //cout<<"ST  "<<st<<endl;
            ans=min(ans,st);
        }
    }





    cout<<ans<<endl;






    return 0;

}






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

    ll n;

    while(cin>>n)
    {
        if(n==-1) break;

        vector<ll> v;
        ll s=1;
        v.push_back(1);
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
               v.push_back(i);
               s+=i;

               if(n/i!=i)
               {

                 v.push_back(n/i);
                 s+=(n/i);
               }
            }
        }



        if(s==n)
        {
            ///6 = 1 + 2 + 3
            sort(v.begin(),v.end());
            cout<<n<<" = ";

            for(i=0;i<v.size();i++)
            {
                if(i==0) cout<<v[i]<<" ";
                else cout<<"+ "<<v[i]<<" ";
            }
            cout<<endl;

        }
        else
        {
            cout<<n<<" is NOT perfect."<<endl;
        }
    }


    return 0;

}






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

ll dp[105];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;

        if(n<2) cout<<1<<endl;
        else if(n==2) cout<<2<<endl;
        else if(n==3) cout<<4<<endl;
        else
        {
            dp[0]=1;dp[1]=1;dp[2]=2;dp[3]=4;

            for(i=4;i<=n;i++) dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4];

            cout<<dp[n]<<endl;
        }


    }

    return 0;

}
/*

8
0
1
2
3
4
5
30
67


*/



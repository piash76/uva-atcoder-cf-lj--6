

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back




using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=200005;


int a[505][505],vis[505][505],lvl[505][505];

ll n,m;
 int dx[]={+1,-1,+0,+0};
int dy[]={+0,+0,+1,-1};


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        string s;cin>>s;
        for(j=0;j<m;j++)
        {
            a[i][j]=s[j]-'0';
        }
    }

    queue<pll> q;
    q.push({0,0});
    vis[0][0]=1;
    lvl[0][0]=0;

    while(!q.empty())
    {
        ll x1=q.front().ff;
        ll y1=q.front().ss;
        q.pop();

        //cout<<"X1 "<<x1<<" y1 "<<y1<<endl;

        for(i=0;i<4;i++)
        {
            ll x2=x1+(a[x1][y1]*dx[i]);
            ll y2=y1+(a[x1][y1]*dy[i]);

            if(x2>=0 and x2<n and y2>=0 and y2<m and !vis[x2][y2] and a[x1][y1]!=0)
            {
                //cout<<"X2 "<<x2<<" y2 "<<y2<<endl;

                vis[x2][y2]=1;
                lvl[x2][y2]=lvl[x1][y1]+1;
                q.push({x2,y2});
            }
        }

    }


    ll ans=lvl[n-1][m-1];


    if(!vis[n-1][m-1]) cout<<"IMPOSSIBLE"<<endl;
    else cout<<ans<<endl;

    return 0;

}

/*

2 2
11
11

2 2
22
22



5 4
2120
1203
3113
1120
1110

*/





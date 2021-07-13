
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
ll lvl[N],vis[N];
ll n,q;
vector<ll> g[N];


void bfs(ll s)
{
    vis[s]=1;
    lvl[s]=0;
    queue<ll> q;
    q.push(s);

    while(!q.empty())
    {
        ll node=q.front();
        q.pop();

        for(auto child :g[node])
        {
            if(vis[child]==0)
            {
                vis[child]=1;
                lvl[child]=lvl[node]+1;
                q.push(child);

            }
        }
    }
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>n>>q;

    for(i=1;i<n;i++)
    {
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs(1);



    while(q--)
    {
        ll u,v;cin>>u>>v;
        ll dif=abs(lvl[u]-lvl[v])+1;

       /// cout<<"dif "<<dif<<endl;

        if(dif%2) cout<<"Town"<<endl;
        else cout<<"Road"<<endl;
    }


    return 0;

}





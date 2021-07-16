

///task: Find the most left element of array <=val

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
const int M=200005;

ll a[M],tree[4*M];

void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return;
    }

    ll mid=(b+e)/2;
    ll lft=2*node;
    ll rt=(2*node)+1;

    build(lft,b,mid);
    build(rt,mid+1,e);

    tree[node]=min(tree[lft],tree[rt]);
}

ll query(ll node,ll b,ll e,ll l,ll r,ll val)
{
    //cout<<"NODE "<<node<<" B "<<b<<" E "<<e<<endl;

    if(r<b or e<l or tree[node]>val) return inf;

    if(b==e)
    {
        if(tree[node]<=val) return b;
        else return inf;
    }

    ll mid=(b+e)/2;
    ll lft=2*node;
    ll rt=(2*node)+1;

    ll ans=inf;
    ///go to left
    if(tree[lft]<=val)
    {
        ans=query(lft,b,mid,l,r,val);

    }

    ///if not found in left subtree ,try to find in right subtree

    if(ans==inf)
    {
        if(tree[rt]<=val)
        {
             ans=query(rt,mid+1,e,l,r,val);
        }
    }

    return ans;


}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    ll n,q;cin>>n>>q;

    for(i=1;i<=n;i++) cin>>a[i];

    build(1,1,n);

    while(q--)
    {
        ll val,l,r;cin>>val>>l>>r;

        while(1)
        {
            if(l>r) break;

            if(val==0) break;

            ll idx=query(1,1,n,l,r,val);

            //cout<<"IDX "<<idx<<endl;

            if(idx==inf) break;

            val%=a[idx];

            l++;

        }

        cout<<val<<endl;


    }

    return 0;

}

/*

5 3
5 3 2 4 6
8 5 5
107 1 4
7 3 5


*/





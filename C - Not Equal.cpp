
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


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    int N; cin>>N;
    vector<int> C(N);
    for(int i = 0; i < N; i++) cin >> C[i];

    sort(C.begin(),C.end());

    long long ans = 1;
    for(int i = 0; i < N; i++) ans = ans * max(0, C[i] - i) % 1000000007;
    cout << ans << endl;

    return 0;

}





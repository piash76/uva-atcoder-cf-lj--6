
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

    int N, X; cin >> N >> X;
    int sum = 0;
    for(int i = 1; i <= N; i++)
    {
        int A;cin >> A;
        if(i%2 == 0) A--;
        sum += A;
    }
    if(X >= sum) cout << "Yes" << endl;
    else  cout << "No" << endl;

}




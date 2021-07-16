#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX = 1e5 + 5;
#define pii pair<ll,ll>

bool taken[MAX];
vector <pii> v[MAX];

///O(V+E)*(logV)
///O(Elog(V))
ll prims(ll source)
{
    priority_queue<pii, vector<pii>, greater<pii> > q;
    ll y,sum=0;
    pii p;
    q.push(make_pair(0, source));
    while(!q.empty())
    {

        p = q.top();
        q.pop();
        source = p.second;

        if(taken[source] == true) continue;

        sum += p.first;
        taken[source] = true;

        for(ll i = 0;i < v[source].size();i++)
        {
            y = v[source][i].second;
            if(taken[y] == false) q.push(v[source][i]);   ///log(v)

        }
    }
    return sum;
}

int main()
{
  ll nodes, edges, x, y,cost, ans;;

    cin >> nodes >> edges;
    for(ll i = 0;i < edges;i++)
    {
        cin >> x >> y >> cost;
        v[x].push_back(make_pair(cost, y));
        v[y].push_back(make_pair(cost, x));
    }

    ans= prims(1);
    cout <<ans << endl;

}

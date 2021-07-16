#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j,x,y,q,m,k;
    cin>>n;
    long long a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>m;
        x=lower_bound(a,a+n,m)-a;
        y=upper_bound(a,a+n,m)-a;
        if(x==0) cout <<"X ";
        else cout<<a[x-1] << " ";
         if(y==n) cout <<"X"<< endl;
        else cout<<a[y]<< endl;

    }
}

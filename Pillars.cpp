#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    int i,j,t,s,k,c,r,m,n,f1,f2;
    cin>>n;
    int a[n];
    m=-1,f1=0,f2=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(m<a[i])
        {
            m=a[i];
            k=i;
        }
    }
    //cout<<k<<endl;
    for(i=0;i<k;i++)
    {
        if(a[i+1]<a[i])
        {
            f1=1;
            break;
        }
    }
    for(i=k+1;i<n-1;i++)
    {
       if(a[i+1]>a[i])
        {
            f2=1;
            break;
        }
    }
    //cout<<f2<<endl;
    if(f1 || f2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    see_you;
}

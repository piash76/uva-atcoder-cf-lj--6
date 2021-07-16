#include<bits/stdc++.h>
#define godspeed() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define pi acos(-1)
using namespace std;

int main()
{
    godspeed()
    int t,i,j,n,p,c;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        p=2,c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]-p>0)
            {
                c+=ceil((a[j]-p)/5.0);
                p=a[j];
            }

        }
         printf("Case %d: %d\n",i,c);

    }






}

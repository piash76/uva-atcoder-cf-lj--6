#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    vector<int> v;
    int n,i,j,k,l,c,s1=0,s2=0;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    v.push_back(1);
     s2=a[1];



         for(i=2;i<=n;i++)
         {
             if(s2>s1/2) break;
             if(a[i]<=a[1]/2)
             {
                 v.push_back(i);
                 s2+=a[i];
             }
         }
    if(s2>s1/2)
    {
       if(v.size()==1)
       {
        if(a[1]>s1/2)
        {
            cout<<v.size()<<endl;
            cout<<1<<endl;
        }
        else cout<<0<<endl;
       }
     else
     {
     cout<<v.size()<<endl;
     for(i=0;i<v.size();i++) cout<<v[i]<<" ";
     }

    }
    else cout<<0<<endl;

      see_you;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,r=0,t=0;
    cin>>a>>b;
    while(t<b)
    {
        t+=a;
        r++;
    }


    cout<<r<<endl;
}

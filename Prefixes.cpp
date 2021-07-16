#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string a;
    int n,i,c=0,l;
    cin>>l;
    cin>>a;
    for(i=0;i<l-1;i+=2)
    {
        if(a[i]=='a' && a[i+1]!='b')
        {
            a[i+1]='b';
            c++;
        }
        else if(a[i]=='b' && a[i+1]!='a')
        {
            a[i+1]='a';
            c++;
        }

    }

    cout<<c<<endl;
    cout<<a<<endl;
}

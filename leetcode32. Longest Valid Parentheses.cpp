
#include<bits/stdc++.h>

#define ll long long
#define cy  cout<<"YES"<<endl

using namespace std;


long long fun(string s)
{
    if(s.size()==0) return 0;

    long long l = s.size();
   long long cnt=0;
   long long ans=0;

    stack<long long> idx;  ///saving the place of invalid chars

    idx.push(-1);  ///imaginary invalid char

    for (long long i=0;i<l;i++)
    {
        if (s[i] == '(')
        {
             idx.push(i);
        }
        else if(s[i]==')')
        {
            ///if there is some ( before ) then just remove ( or else if there is some )
            ///or invalid chars then replace the place
            if(!idx.empty())
            {
                idx.pop();
            }

            ///there is definitely some invalid char
            if(!idx.empty())
            {
                ans=max(ans,i-idx.top());

            }
            else   ///this will be the next invalid char
            {
                idx.push(i);

            }


        }


    }

    return ans;
}

int main()
{

    ll t,i,j;

    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        ll ans=fun(s);
        cout<<ans<<endl;
    }


    return 0;

}







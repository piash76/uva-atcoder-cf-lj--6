




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =1000009;///1e6
ll c[mx],ans[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    ll n,m,d;cin>>n>>m>>d;

    for(i=1;i<=m;i++) cin>>c[i];

    ll pos=n;
    for(i=m;i>=1;i--)
    {
        ll x=c[i];
        while(x)
        {
            ans[pos--]=i;
            x--;
        }
    }

    //for(i=1;i<=n;i++) cout<<ans[i]<<" ";
   // cout<<endl;

   ll idx=0;

   while(1)
   {
       //cout<<"IDX "<<idx<<endl;

       while(idx+1<=n and ans[idx+1]!=0) idx++;

       if(idx+d>=n+1) break;


       if(ans[idx+d]==0)
       {
           ll lpos=-1,lnum;

           for(i=idx+d;i<=n;i++)
           {
               if(ans[i]!=0)
               {
                   lpos=i;
                   lnum=ans[i];
                   break;
               }
           }

           if(lpos==-1) {cn;return 0;}


           ll rpos=-1;

           for(i=lpos;i<=n;i++)
           {
               if(ans[i]!=lnum) break;
               rpos=i;
           }

         // cout<<"Lpos "<<lpos<<" rpos "<<rpos<<endl;




           ///shamne ana

           while(ans[idx+d]==0)
           {
               swap(ans[lpos-1],ans[rpos]);
               lpos--;
               rpos--;
           }




       }

       idx+=d;

      if(idx>=n+1) break;


   }


   cy;

    for(i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;



    return 0;

}






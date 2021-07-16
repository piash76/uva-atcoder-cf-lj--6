#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long num,i,t,c;
    cin>>t;
    while(t--)
    {

     scanf("%lld",&num);
      c=0;
       for(i=2;i*i<=num;i++)
       {
         if(num%i==0)
         {
            c++;
            num=num/i;

            i=1;
         }
       }
       c++;

       if(c==0)
       {
           cout<<0<<endl;
       }
       else
       {
          cout<<(num-1-c)<<endl;
       }

    }

}

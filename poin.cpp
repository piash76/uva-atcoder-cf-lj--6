#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t,j,i,n,q,a[100005],x,y,l,h,ans;

     scanf("%d",&t);
    for (j=1;j<=t;j++)
    {
        scanf("%d %d",&n,&q);
        for (i=0 ; i<n ; i++)scanf("%d",&a[i]);



        printf ("Case %d:\n",j) ;
        for (i=1 ; i<=q ; i++)
        {
            scanf("%d %d",&x,&y);
            l=lower_bound(a,a+n ,x)-a ;
            h=upper_bound(a,a+n ,y)-a ;
            ans=h-l ;

           printf ("%d\n",ans) ;

        }

    }

}

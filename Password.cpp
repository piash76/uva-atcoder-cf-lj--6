#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;

//char pattern[maxn];
string pattern;
int m;
int lps[maxn];



int prefix()
{
    for(int i=0;i<=m;i++) lps[i]=0;

    int index=0;
    for(int i=1;i<=m;)
    {
        if(pattern[index]==pattern[i])
        {
        lps[i]=index+1;
        index++;i++;
        }
        else
        {
            if(index!=0) index=lps[index-1];
            else { lps[i]=index;i++; }
        }
    }
    return lps[m-1];

}

int main()
{

     cin>>pattern;
     m=pattern.size();


    int x=prefix();
    //cout<<x<<endl;

    //for(int i=0;i<m;i++) cout<<lps[i]<<" ";
   // cout<<endl;

    if(x==0) printf("Just a legend\n");

    else
    {
        for(int i=0;i<m-1;i++)
        {
            if(lps[i]==x)
            {
                cout<<pattern.substr(0,lps[i])<<endl;  ///papacdxpapa  0 0 1 2 0 0 0 1 2
                return 0;
            }
        }

        if(lps[ lps[m-1]-1 ]==0) printf("Just a legend\n");
        else cout<<pattern.substr(0,lps[ lps[m-1]-1 ])<<endl;  ///p[n-1] gives the suffix which is also prefix. So there is a string of length p[n-1] starting from beginning(prefix)..Now by p[p[n-1]-1] we are basically checking if this prefix string has again any sub-suffix that is also sub-prefix if it is so then it guarantees that suffix (p[n])

    }




}
/*
papacdxpa
papapapap
aabcaa

*/


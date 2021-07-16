
#include<bits/stdc++.h>

using namespace std;

const int N =1e5+5;

int n,q,flag;
int nodecnt,tree[N][10],END[N];

void add(string s)
{
    int node=0;
    for(char ch:s)
    {
        int i=ch-'0';
        if(!tree[node][i])
        {
            tree[node][i]=++nodecnt;
        }
        node=tree[node][i];

    }

    END[node]++;


}

void query(string s)
{
     int node=0;
     int len=s.size();
    for(int it=0;it<len-1;it++)
    {
        int i=s[it]-'0';
        node=tree[node][i];

        if(END[node]>0 ) { flag=0;

        break; }

    }

}

int main()
{

    int i,j,t,cas=0;

   cin>>t;
    while(t--)
    {
        nodecnt=0;
        memset(tree,0,sizeof(tree));
        memset(END,0,sizeof(END));

        flag=1;
        int f=1;
        vector<string>v;
        cin>>n;

        while(n--)
        {
            string s;cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        int sz=v.size();


        for(i=0;i<sz;i++)
        {
            add(v[i]);
        }


        for(i=sz-1;i>=0;i--)
        {

            query(v[i]);
            if(flag==0) {
             f=0;
             break;
            }

        }
       // cout<<"Case "<<++cas<<": ";
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;




    }



}




    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
        int t,i,n,j,flag,p;
        string s[2];
        cin>>t;
        while(t--)
        {
            flag=0;
            cin>>n;
            cin>>s[0];
            cin>>s[1];
            p=0;
            for(i=0;i<n;i++)
            {
                if(s[p][i]>'2')
                {
                    if(s[(p+1)%2][i]<='2')
                    {
                        flag=1;
                        break;
                    }
                    else
                   {
                    p=(p+1)%2;
                   }
                }

            }
            if(p==0)
            {
                flag=1;
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }

#include<bits/stdc++.h>
using namespace std;

class prepos
{
    int x;
public:
    void getval()
    {
        cin>>x;
    }
    void show()
    {
        cout<<x<<endl;
    }
    friend prepos operator++(prepos &z);//prefix
    friend prepos operator++(prepos &q,int v);
};

prepos operator++(prepos &z) //prefix
    {
        prepos temp;
        temp.x=++z.x;
        return temp;
    }
    prepos operator++(prepos &q,int v) //pretfix
    {
        prepos temp;
        temp.x=q.x++;
        return temp;
    }

int main()
{
    prepos a,b;
    a.getval(),b.getval();
    a.show();
    b.show();
    a=++b;
    a.show();
    a=b++;
    a.show();

}


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
    prepos operator++() //prefix
    {
        prepos temp;
        temp.x=++x;
        return temp;
    }
    prepos operator++(int) //postfix
    {
        prepos temp;
        temp.x=x++;
        return temp;
    }
};

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

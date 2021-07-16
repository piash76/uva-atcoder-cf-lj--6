///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>

#define ll                      long long



using namespace std;



int main()
{

    ll i,j,t,cas=0;

    priority_queue<int> q; ///max heap

   // cout<<q.top()<<endl;

    q.push(1);q.push(2);

    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }


    priority_queue<int, vector<int> , greater<int> > q1; ///min heap sorted ascending

    q1.push(1);q1.push(2);

    while(!q1.empty())
    {
        cout<<q1.top()<<endl;
        q1.pop();
    }







}


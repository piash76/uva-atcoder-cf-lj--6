ll prime_factor(ll n)
{
    vector<ll>v;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(isprime(i)) v.push_back(i);
            if(isprime(n/i) and n/i!=i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());

}

void prime_factor(ll n)
{
     vector<ll>v;

    if(isprime(n)) v.push_back(n);
    else
    {


    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(isprime(i)) v.push_back(i);
            if(isprime(i) and n/i!=i) v.push_back(n/i);
        }
    }

    }
    sort(v.begin(),v.end());
    cout<<"FACTOR "<<endl;
    for(auto x: v) cout<<x<<endl;
    //return v;

    //for(auto x: v) cout<<x<<endl;

}

///more fast
void prime_factor(ll n)
{
    vector<ll> v;
   ll x=sqrt(n);
   for(ll i=0;prime[i]<=x;i++)
   {
       if(n%prime[i]==0)
       {
           v.push_back(prime[i]);
           while(n%prime[i]==0) n/=prime[i];
       }
   }
   if(n>1) v.push_back(n);
}


 ///generating all prime factor up to 1e6
    for(i=2;i<=1000000;i++)  ///nlogn
    {
        ll num=i;
        for(j=0;prime[j]*prime[j]<=num;j++)
        {
            if(num%prime[j]==0)
            {
                f[i].push_back(prime[j]);
                while(num%prime[j]==0) num/=prime[j];
            }
        }
        if(num>1) f[i].push_back(num);
    }

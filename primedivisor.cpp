vector<ll>p;

    for( i = 2; i*i <= n; i++)  ///calculating the prime factors
    {
        if(n%i == 0)
        {
            p.push_back(i);
            while(n%i == 0)
                n /= i;
        }
    }

    if(n > 1)  p.push_back(n);

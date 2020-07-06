const int Max=1000000;
bool prime_check[Max+1];
vector <int> prime_list;

void sieve()
{
    memset(prime_check, true, sizeof(prime_check));

    int sq = sqrt(Max);

    for(int i=2; i*i<=Max; i++)
    {
        if(prime_check[i])
        {
            prime_list.push_back(i);

            for(int j=i*i; j<=Max; j+=i)
                prime_check[j] = false;
        }
    }

    for(int i=sq+1; i<=Max; i++)
    {
        if(prime_check[i])
            prime_list.push_back(i);
    }
}


vector <int> prime_factors;

void factorize_prime(int n)
{
    sieve();

    for(int i=0; i<prime_list.size();i++)
    {
        while(n % prime_list[i] == 0)
        {
            n /= prime_list[i];
            prime_factors.push_back(prime_list[i]);
        } 

        if(n==1) break;
    }
}

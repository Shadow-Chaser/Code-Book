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

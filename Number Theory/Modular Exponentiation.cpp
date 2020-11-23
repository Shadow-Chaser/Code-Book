long long moduexp(long long a, long long n, long long p)
{
	long long res = 1;
	while (n)
	{
		if (n % 2)
			res = (res * a) % p , n--;
		else
			a = (a * a) % p, n /= 2;
	}

	return res;
}
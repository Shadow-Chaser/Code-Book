long long binpow(long long a, long long n)
{
	long long res = 1;
	while (n)
	{
		if (n % 2)
			res *= a, n--;
		else
			a *= a, n /= 2;
	}

	return res;
}

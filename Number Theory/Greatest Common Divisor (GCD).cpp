int gcd(int A, int B)
{
	int m = min(A, B), temp;
	for (int i = m; i > 0; --i)
		if (A % i == 0 && B % i == 0)
		{
			temp = i;
			return gcd;
		}
}
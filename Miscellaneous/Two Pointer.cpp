int arr[], n, x;
int i = 0; j = n - 1;

while (i < j)
{
	if (arr[i] + arr[j] == x)
	{
		cout << arr[i] << " " << a[j];
		break;
	}
	else if (arr[i] + arr[j] < x)
		i++;
	else
		j--;

}
#include <stdio.h>

#define llu unsigned long long

char ToBase62(llu x);

int main(void)
{
	int i = 0;
	llu p, q, n;
	llu a[40];
	
	scanf("%llu %llu %llu", &p, &q, &n);
	
	while (n > 0)
	{
		a[i] = n % p;
		n = (n - a[i++]) * q / p;
	}
	
	while (i--)
	{
		printf("%c", ToBase62(a[i]));
	}
	
	return 0;
}

char ToBase62(llu x)
{
	if (x < 10)
	{
		return x + '0';
	}
	
	if (x < 36)
	{
		return x + 'A' - 10;
	}
	
	return x + 'a' - 36;
}
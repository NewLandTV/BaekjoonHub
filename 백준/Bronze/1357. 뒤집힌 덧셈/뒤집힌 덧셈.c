#include <stdio.h>

int Rev(int n);

int main(void)
{
	int x, y;
	
	scanf("%d %d", &x, &y);
	printf("%d", Rev(Rev(x) + Rev(y)));
	
	return 0;
}

int Rev(int n)
{
	if (n >= 1000)
	{
		n = n % 10 * 1000 + n / 10 % 10 * 100 + n / 100 % 10 * 10 + n / 1000;
	}
	else if (n >= 100)
	{
		n = n % 10 * 100 + n / 10 % 10 * 10 + n / 100;
	}
	else if (n >= 10)
	{
		n = n % 10 * 10 + n / 10;
	}
	
	return n;
}
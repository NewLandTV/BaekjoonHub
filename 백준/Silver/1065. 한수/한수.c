#include <stdio.h>

int Han(int n);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d", Han(n));
	
	return 0;
}

int Han(int n)
{
	int i;
	int hund;
	int ten;
	int one;
	int result = 0;
	
	if (n < 100)
	{
		return n;
	}
	
	for (i = 100; i <= n; i++)
	{
		hund = i / 100;
		ten = (i % 100) / 10;
		one = (i % 100) % 10;
		
		if ((hund - ten) == (ten - one))
		{
			result++;
		}
	}
	
	return (result + 99);
}
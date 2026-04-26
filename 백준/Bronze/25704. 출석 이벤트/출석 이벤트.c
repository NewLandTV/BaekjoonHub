#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int n;
	int p;
	int sale;
	
	scanf("%d", &n);
	scanf("%d", &p);
	
	sale = p;
	
	if (n >= 5)
	{
		sale = Min(sale, p - 500);
	}
	if (n >= 10)
	{
		sale = Min(sale, p / 10 * 9);
	}
	if (n >= 15)
	{
		sale = Min(sale, p - 2000);
	}
	if (n >= 20)
	{
		sale = Min(sale, p / 4 * 3);
	}
	
	printf("%d", Max(sale, 0));
	
	return 0;
}
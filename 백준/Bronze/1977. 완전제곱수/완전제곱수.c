#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	int m;
	int n;
	int sum = 0;
	int min;
	
	scanf("%d", &m);
	scanf("%d", &n);
	
	for (i = ceil((double)sqrt(m)); i <= floor((double)sqrt(n)); i++)
	{
		sum += i * i;
	}
	
	if (sum == 0)
	{
		printf("-1");
		
		return 0;
	}
	
	min = ceil((double)sqrt(m));
	min *= min;
	
	printf("%d\n", sum);
	printf("%d", min);
	
	return 0;
}
#include <stdio.h>

int main(void)
{
	int i;
	int x;
	int n;
	int a;
	int b;
	int sum = 0;
	
	scanf("%d", &x);
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		
		sum += a * b;
	}
	
	if (x == sum)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
	return 0;
}
#include <stdio.h>

int main(void)
{
	int i;
	int a, b;
	int c, d;
	int f[100] = { 0, };
	int x = 0;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	for (i = a - 1; i < b - 1; f[i++]++);
	for (i = c - 1; i < d - 1; f[i++]++);
	
	for (i = 0; i < 100; i++)
	{
		if (f[i])
		{
			x++;
		}
	}
	
	printf("%d", x);
	
	return 0;
}
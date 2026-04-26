#include <stdio.h>

int a[30];

void F(int n, int max, int len);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	F(n, n, 0);
	
	return 0;
}

void F(int n, int max, int len)
{
	int i;
	
	if (n == 0)
	{
		for (i = 0; i < len; i++)
		{
			printf("%d ", a[i]);
		}
		
		printf("\n");
		
		return;
	}
	
	for (i = n > max ? max : n; i > 0; i--)
	{
		a[len] = i;
		F(n - i, i, len + 1);
	}
}
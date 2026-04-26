#include <stdio.h>

int main(void)
{
	int i;
	int n, x, k;
	int a, b;
	int temp, cup[200000] = { 0, };
	
	scanf("%d %d %d", &n, &x, &k);
	
	for (cup[x - 1] = 1; k--;)
	{
		scanf("%d %d", &a, &b);
		
		temp = cup[a - 1];
		cup[a - 1] = cup[b - 1];
		cup[b - 1] = temp;
	}
	
	for (i = 0; i < n; i++)
	{
		if (cup[i])
		{
			printf("%d", i + 1);
			
			break;
		}
	}
	
	return 0;
}
#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a;
	int p = 0, r = 0, j = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		if (a == 1)
		{
			p++;
		}
		else if (a == 0)
		{
			j++;
		}
		else
		{
			r++;
		}
	}
	
	if (n & 1)
	{
		n++;
	}
	
	if (j >= n >> 1)
	{
		printf("INVALID");
		
		return 0;
	}
	
	printf("%s", p > r ? "APPROVED" : "REJECTED");
	
	return 0;
}
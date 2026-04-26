#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	int df[10] = { 0, 1, 2, 4 };
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d", &n);
		
		for (i = 4; i <= n; i++)
		{
			df[i] = df[i - 1] + df[i - 2] + df[i - 3];
		}
		
		printf("%d\n", df[n]);
	}
	
	return 0;
}
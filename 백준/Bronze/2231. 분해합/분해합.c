#include <stdio.h>

int main(void)
{
	int n;
	int i, temp;
	int constructor = 0, sum;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (temp = i, constructor = i, sum = 0; temp > 0; sum += temp % 10, temp /= 10);
		
		if (constructor + sum == n)
		{
			break;
		}
	}
	
	printf("%d", constructor == n ? 0 : constructor);
	
	return 0;
}
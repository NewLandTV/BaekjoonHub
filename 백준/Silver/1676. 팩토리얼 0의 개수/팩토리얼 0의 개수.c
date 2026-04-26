#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int two = 0, five = 0;
	int temp;
	
	scanf("%d", &n);
	
	for (i = temp = 2; i <= n; temp = ++i)
	{
		if (temp % 5 == 0)
		{
			for (; temp % 5 == 0; five++, temp /= 5);
		}
		else if (temp & 1)
		{
			for (; temp & 1; two++, temp >>= 1);
		}
	}
	
	printf("%d", two < five ? two : five);
	
	return 0;
}
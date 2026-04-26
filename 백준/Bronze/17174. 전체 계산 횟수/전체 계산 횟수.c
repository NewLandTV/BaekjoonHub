#include <stdio.h>

int main(void)
{
	int n, m;
	int count = 0;
	
	scanf("%d %d", &n, &m);
	
	count = n;
	
	while (1)
	{
		count += n / m;
		n /= m;
		
		if (n < m)
		{
			break;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
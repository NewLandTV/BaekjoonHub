#include <stdio.h>

int main(void)
{
	int i;
	int n, m, k;
	int a, b;
	
	scanf("%d %d %d", &n, &m, &k);
	
	for (i = 1, a = n, b = 0; ; i++)
	{
		a += m;
		b += k;
		
		if (a <= b)
		{
			printf("%d", i);
			
			return 0;
		}
	}
	
	return 0;
}
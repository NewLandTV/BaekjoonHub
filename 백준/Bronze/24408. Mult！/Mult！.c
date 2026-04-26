#include <stdio.h>

int main(void)
{
	int n;
	int a;
	int m = -1;
	
	scanf("%d", &n);
	
	while (--n)
	{
		scanf("%d", &a);
		
		if (m == -1)
		{
			m = a;
			
			continue;
		}
		
		if (a % m == 0)
		{
			printf("%d\n", a);
			
			m = -1;
		}
	}
	
	return 0;
}
#include <stdio.h>

int main(void)
{
	int i;
	int m;
	int a;
	int b;
	int result = 0;
	
	scanf("%d", &m);
	scanf("%d", &a);
	scanf("%d", &b);
	
	for (i = a; ; i++, result++)
	{
		if (i > m)
		{
			i = 1;
		}
		
		if (i == b)
		{
			break;
		}
	}
	
	printf("%d", result);
	
	return 0;
}
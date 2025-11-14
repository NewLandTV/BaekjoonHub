#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int i;
	int r, b;
	int size;
	
	scanf("%d %d", &r, &b);
	
	size = r + b;
	
	for (i = 3; ; i++)
	{
		if (size % i != 0)
		{
			continue;
		}
		
		if ((i - 2) * (size / i - 2) == b)
		{
			printf("%d %d", Max(i, size / i), Min(i, size / i));
			
			break;
		}
	}
	
	return 0;
}
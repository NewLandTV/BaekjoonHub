#include <stdio.h>

int main(void)
{
	unsigned int s;
	int count = 0;
	unsigned long long total = 0;
	
	scanf("%u", &s);
	
	while (1)
	{
		total += ++count;
		
		if (total > s)
		{
			break;
		}
	}
	
	printf("%d", count - 1);
	
	return 0;
}